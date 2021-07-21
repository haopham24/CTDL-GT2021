#include <bits/stdc++.h>
using namespace std;

int a[505][505], cx[505][505], n, m, x[] = {-1, 0, 1}, y[] = {-1, 0, 1};

void dfs(int i, int j)
{
    cx[i][j] = 0;
    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            if (i + x[k] >= 0 && j + y[l] >= 0 && a[i + x[k]][j + y[l]] && cx[i + x[k]][j + y[l]])
            {
                dfs(i + x[k], j + y[l]);
            }
        }
    }
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(cx, 1, sizeof(cx));
        int n, m, cnt = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] && cx[i][j])
                {
                    cnt++;
                    dfs(i, j);
                    //cout<<'\n';
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}