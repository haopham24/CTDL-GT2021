#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > E(1100);
vector<bool> visited(1100);
int v, e, cnt;

void in()
{
    cnt = 0;
    for (int i = 1; i <= v; i++)
        visited[i] = false;
}

int bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    cnt++;
    while (!q.empty())
    {
        int t = q.front();
        q.pop();
        for (int i = 0; i < E[t].size(); i++)
        {
            int v = E[t][i];
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
                cnt++;
            }
        }
    }
    return cnt;
}

void solve()
{
    for (int i = 1; i <= v; i++)
    {
        in();
        visited[i] = true;
        for(int j = 1; j <= v; j++)
        {
            if(!visited[j] && bfs(j) < v-1)
            {
                cout << i << ' ';
                break;
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
        cin >> v >> e;
        E.resize(0);
        E.resize(v+1);
        for(int i = 0; i< e; i++)
        {
            int a, b;
            cin >> a >> b;
            E[a].push_back(b);
            E[b].push_back(a);
        }
        solve();
        cout << '\n';
    }

    return 0;
}