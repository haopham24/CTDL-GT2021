#include <bits/stdc++.h>
using namespace std;
int cx[1005], c[2][1005], k = 0;
;
vector<int> ke[1005];
void dfs(int u)
{
    cx[u] = 0;
    for (int i = 0; i < ke[u].size(); i++)
    {
        if (cx[ke[u][i]])
        {
            c[0][k] = u;
            c[1][k] = ke[u][i];
            k++;

            dfs(ke[u][i]);
        }
    }
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        k = 0;
        int n, m, u;
        cin >> n >> m >> u;
        for (int i = 1; i <= n; i++)
        {
            ke[i].clear();
            cx[i] = 1;
        }
        for (int j = 1; j <= m; j++)
        {

            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        dfs(u);
        if (k == n - 1)
        {
            for (int i = 0; i < k; i++)
                cout << c[0][i] << ' ' << c[1][i] << '\n';
        }
        else
            cout << -1 << '\n';
    }
    return 0;
}