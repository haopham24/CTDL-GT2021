/*
Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy viết thuật toán duyệt theo chiều rộng bắt đầu tại đỉnh uÎV (BFS(u)=?)

Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào ba số |V|, |E|, uÎV tương ứng với số đỉnh, số cạnh và đỉnh bắt đầu duyệt; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;

Output:
Đưa ra danh sách các đỉnh được duyệt theo thuật toán BFS(u) của mỗi test theo khuôn dạng của ví dụ dưới đây.

Ví dụ:
Input:
1
6  9  1
1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4

Output:
1 2 5 4 6 3
*/

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
