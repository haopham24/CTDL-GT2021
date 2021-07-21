#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> E;
vector<bool> visited(1100);

void bfs(int u)
{
    queue<int> q;
    cout << u << ' ';
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < E[u].size(); i++)
        {
            int v = E[u][i];
            if (!visited[v])
            {
                cout << v << ' ';
                q.push(v);
                visited[v] = true;
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
        int v, e, u;
        cin >> v >> e >> u;
        E.resize(0);
        E.resize(v + 1);
        for (int i = 1; i <= v; i++)
            visited[i] = false;
        while (e--)
        {
            int a, b;
            cin >> a >> b;
            E[a].push_back(b);
        }
        bfs(u);
        cout << '\n';
    }
}