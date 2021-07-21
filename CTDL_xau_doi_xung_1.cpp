/*
Cho xâu ký tự str. Nhiệm vụ của bạn là tìm số phép chèn tối thiểu các ký tự vào str để str trở thành xâu đối xứng. Ví dụ: str =”ab” ta có số phép chèn tối thiểu là 1 để trở thành xâu đối xứng “aba” hoặc “bab”. Với xâu str=”aa” thì số phép chèn tối thiểu là 0. Với xâu str=”abcd” có số phép chèn tối thiểu là 3 để trở thành xâu “dcbabcd”

Input:
    Dòng đầu tiên đưa vào số lượng bộ test T.
    Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự được viết trên một dòng
    T, str thỏa mãn ràng buộc: 1≤T≤100;  1≤length(str)≤40.

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
        string a;
        cin >> a;
        int ok = 1;
        int n = a.length();
        int k = 0;
        int f[n + 5][n + 5];
        string s = a;
        reverse(s.begin(), s.end());
        memset(f, 0, sizeof(f));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i - 1] == s[j - 1])
                    f[i][j] = f[i - 1][j - 1] + 1;
                else
                    f[i][j] = max(f[i - 1][j], f[i][j - 1]);
                k = max(k, f[i][j]);
            }
        }
        cout << n - k << '\n';
    }
    return 0;
}