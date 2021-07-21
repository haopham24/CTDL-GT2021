/*
Input:
    2
    5 8 13
    geeks geeksfor geeksforgeeks
    7 6 5
    abcd1e2 bc12ea bd1ea
Output:
    5
    3
*/
#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l;
        cin >> n >> m >> l;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        int kq[n + 1][m + 1][l + 1];
        memset(kq, 0, sizeof(kq));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                for (int k = 1; k <= l; k++)
                {
                    if (s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1])
                        kq[i][j][k] = 1 + kq[i - 1][j - 1][k - 1];
                    else
                    {
                        kq[i][j][k] = max(kq[i - 1][j][k], kq[i][j - 1][k]);
                        kq[i][j][k] = max(kq[i][j][k], kq[i][j][k - 1]);
                    }
                }
            }
        }
        cout << kq[n][m][l] << "\n";
    }
    return 0;
}