#include <bits/stdc++.h>
using namespace std;

vector<int> edge[1001];
int visited[1001], tr[1001], v, e, s, t;

void dfs(int u)
{
    if (visited[t])
        return;
    visited[u] = true;
    for (int i = 0; i < edge[u].size(); i++)
    {
        if (!visited[edge[u][i]])
        {

            tr[edge[u][i]] = u;
            dfs(edge[u][i]);
        }
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> v >> e >> s >> t;
        for (int i = 0; i <= v; i++)
        {
            edge[i].clear();
            visited[i] = false;
            tr[i] = 0;
        }
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            edge[x].push_back(y);
        }
        dfs(s);
        if (!visited[t])
        {
            cout << "-1\n";
            continue;
        }
        vector<int> ans;
        int i = t;
        while (i != s)
        {
            ans.push_back(i);
            i = tr[i];
        }
        ans.push_back(i);
        for (int j = ans.size()-1; j >= 0; j--)
            cout << ans[j] << ' ';
        cout << '\n';
    }
    return 0;
}