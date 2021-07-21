/*
Cho số nguyên dương N được biểu diễn như một xâu ký tự số. Nhiệm vụ của bạn là tìm tổng của tất cả các số tạo bởi các xâu con của N. Ví dụ N=”1234” ta có kết quả là 1670 = 1 + 2 + 3 + 4 + 12 + 23 + 34 + 123 + 234 + 1234.

Input:
    Dòng đầu tiên đưa vào số lượng bộ test T.
    Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số N.
    T, N thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤1012.

Output:
    Đưa ra kết quả mỗi test theo từng dòng.
*/

#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long a[(int)1e5];
        memset(a, 0, sizeof(a));
        long long sum = s[0] - '0';
        a[0] = sum;
        for (int i = 1; i < s.length(); i++)
        {
            for (int j = 0; j <= i; j++)
            {
                a[j] = a[j] * 10 + (s[i] - '0');
                sum += a[j];
            }
        }
        cout << sum << '\n';
    }
    return 0;
}