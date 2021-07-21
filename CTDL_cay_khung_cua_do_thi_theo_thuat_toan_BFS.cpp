#include <bits/stdc++.h>
using namespace std;
int cx[1005], ca[2][1005], k = 0;

vector<int> ke[1005];
void bfs(int u)
{
    queue<int> c;
    c.push(u);
    while (c.size())
    {
        int s = c.front();
        c.pop();
        cx[s] = 0;
        for (int i = 0; i < ke[s].size(); i++)
        {
            if (cx[ke[s][i]])
            {
                ca[0][k] = s;
                ca[1][k] = ke[s][i];
                k++;
                c.push(ke[s][i]);
                cx[ke[s][i]] = 0;
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
        bfs(u);
        if (k == n - 1)
        {
            for (int i = 0; i < k; i++)
                cout << ca[0][i] << ' ' << ca[1][i] << '\n';
        }
        else
            cout << -1 << '\n';
    }
    return 0;
}