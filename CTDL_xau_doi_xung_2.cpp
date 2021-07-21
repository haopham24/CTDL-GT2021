/*
Cho xâu ký tự S. Nhiệm vụ của bạn là tìm số phép loại bỏ ít nhất các ký tự trong S để S trở thành xâu đối xứng. Chú ý, phép loại bỏ phải bảo toàn tính trước sau của các ký tự trong S.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự được viết trên một dòng
T, str thỏa mãn ràng buộc: 1≤T≤100;  1≤length(S)≤100.
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
        int n = s.length();
        int f[n + 5][n + 5];
        memset(f, 0, sizeof(f));
        for (int i = 0; i < n; i++)
            f[i][i] = 1;
        for (int k = 2; k <= n; k++)
        {
            for (int i = 0; i <= n - k; i++)
            {
                int j = i + k - 1;
                if (s[i] == s[j] && k == 2)
                    f[i][j] = 2;
                else if (s[i] == s[j])
                    f[i][j] = f[i + 1][j - 1] + 2;
                else
                    f[i][j] = max(f[i][j - 1], f[i + 1][j]);
            }
        }
        cout << n - f[0][n - 1] << '\n';
    }
    return 0;
}