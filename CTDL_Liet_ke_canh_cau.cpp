#include<bits/stdc++.h>
using namespace std;

int a[1005][1005], v, e, cnt;
bool visited[1005];

void in()
{
    cnt = 0;
    for(int i = 1; i <= v; i++) visited[i] = false;
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
        for (int i = 1; i <= v; i++)
        {
            if (!visited[i] && a[t][i])
            {
                q.push(i);
                visited[i] = true;
                cnt++;
            }
        }
    }
    return cnt;
}

void solve()
{
    in();
    for(int i = 1; i <= v; i++)
    {
        for(int j = 1+i; j <= v; j++)
        {
            if(a[i][j])
            {
                a[i][j] = 0;
                a[j][i] = 0;
                if(bfs(1) != v) cout << i <<' ' << j << ' ';
                a[i][j] = 1;
                in();
            }
        }
    }
}

main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> v >> e;
        for(int i = 1; i <= v; i++){
            for(int j = 1; j <= v; j++) a[i][j] = 0;
        }
        for(int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        solve();
        cout << '\n';
    }

    return 0;
}