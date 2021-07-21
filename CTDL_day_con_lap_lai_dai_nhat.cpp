/*
Cho xâu ký tự S. Nhiệm vụ của bạn là tìm độ dài dãy con lặp lại dài nhất trong S. Dãy con có thể chứa các phần tử không liên tiếp nhau.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào độ dài xâu str; dòng tiếp theo đưa vào xâu S.
T, str thỏa mãn ràng buộc: 1 ≤ T ≤ 100;  1 ≤ size(S) ≤ 100.

Output:
Đưa ra kết quả mỗi test theo từng dòng.

Ví dụ:
Input:
2
3
abc

5
axxxy

Output:
0
2

*/
#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a[n + 1][n + 1] = {};
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s[i - 1] == s[j - 1] && i != j) a[i][j] = a[i - 1][j - 1] + 1;
                else a[i][j] = max(a[i][j - 1], a[i - 1][j]);
            }
        }
        cout << a[n][n] << '\n';
    }
    return 0;
}