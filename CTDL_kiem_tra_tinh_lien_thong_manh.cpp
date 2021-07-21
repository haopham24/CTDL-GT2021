#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > E(1100);
vector<bool> visited(1100);
int cnt, v , e;

void in()
{
    for(int i = 1; i <= v; i++) visited[i] = false;
    cnt = 0;
}

int bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    cnt++;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for(int i = 0; i < E[v].size(); i++)
        {
            int t = E[v][i];
            if(!visited[t])
            {
                q.push(t);
                visited[t] = true;
                cnt++;
            }
        }
    }
    return cnt;
    
}

bool solve()
{
    for(int i = 1; i <= v; i++)
    {
        in();
        if(bfs(i) != v) return false; 
    }
    return true;
}

main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> v >> e;
        E.resize(0);
        E.resize(v+1);
        for(int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            E[a].push_back(b);
        }
        if(solve()) cout << "YES\n";
        else cout << "NO\n";
    }
    
}