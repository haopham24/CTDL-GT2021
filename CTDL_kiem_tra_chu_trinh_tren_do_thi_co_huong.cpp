/*

Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có tồn tại chu trình hay không?

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
bool visited[1100];
vector<int> edge[1100];

int DFS(int u)
{
    stack<int> s;
    s.push(u);
    visited[u] = true;
    while (!s.empty())
    {
        int t = s.top();
        s.pop();
        for (int i = 0; i < edge[t].size(); i++)
        {
            int v = edge[t][i];
            if (!visited[v])
            {
                visited[v] = true;
                s.push(t);
                s.push(v);
                break;
            }
            else if (v == u) return 1;
        }
    }
    return 0;
}

void solve()
{
    for (int i = 1; i <= n; i++)
    {
        memset(visited, false, sizeof(visited));
        if (DFS(i))
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
        for (int i = 0; i < 1100; i++) edge[i].clear();
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            int a, b;
            cin >> a >> b;
            edge[a].push_back(b);
            // edge[b].push_back(a);
        }
        solve();
    }
    return 0;
}