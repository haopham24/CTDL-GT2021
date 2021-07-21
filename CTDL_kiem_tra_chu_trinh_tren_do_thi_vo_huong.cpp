/*
Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có tồn tại chu trình hay không?

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh,  số cạnh của đồ thị; Dòng tiếp theo đưa vào các bộ đôi u, v tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra YES hoặc “NO” kết quả test theo từng dòng tương ứng với đồ thị tồn tại hoặc không tồn tại chu trình.

*/
#include <bits/stdc++.h>
using namespace std;

int n, m;
bool check, visited[1100];
vector<int> edge[1100];

void dfs(int u, int t)
{
    visited[u] = true;
    for (int i = 0; i < edge[u].size(); i++)
    {
        int v = edge[u][i];
        if (!visited[v]) dfs(v, u);
        else if (v != t) check = 1;
    }
}

void solve()
{
    check = 0;
    for (int i = 1; i <= n; i++)
    {
        memset(visited, false, sizeof(visited));
        dfs(i, 0);
        if (check)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(visited, false, sizeof(visited));
        for (int i = 0; i < 1100; i++)
            edge[i].clear();
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            int a, b;
            cin >> a >> b;
            edge[a].push_back(b);
            edge[b].push_back(a);
        }
        solve();
    }
    return 0;
}