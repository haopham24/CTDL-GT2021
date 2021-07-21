/*
Cho đồ thị vô hướng có N đỉnh và M cạnh. Có Q truy vấn, mỗi truy vấn yêu cầu trả lời câu hỏi giữa 2 đỉnh x và y có tồn tại đường đi tới nhau hay không?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm 2 số nguyên N, M (1 ≤ N, M ≤ 1000).
M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối giữa đỉnh u và v.
Dòng tiếp là số lượng truy vấn Q (1 ≤ Q ≤ 1000).
Q dòng tiếp theo, mỗi dòng gồm 2 số nguyên x và y.
Output:  Với mỗi truy vấn, in ra “YES” nếu có đường đi từ x tới y, in ra “NO” nếu ngược lại.

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> edge[1100];
int v, e;
bool visited[1100];

void dfs(int s, int t)
{
    if (visited[t])
        return;
    visited[s] = true;
    for (int i = 0; i < edge[s].size(); i++)
    {
        if (!visited[edge[s][i]])
        {
            dfs(edge[s][i], t);
        }
    }
}

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> v >> e;
        for (int i = 0; i <= v; i++)
        {
            edge[i].clear();
            visited[i] = false;
        }
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        int q, a[1100][2];
        cin >> q;
        for (int i = 0; i < q; i++)
            cin >> a[i][0] >> a[i][1];
        for (int i = 0; i < q; i++)
        {
            for (int j = 0; j <= v; j++)
                visited[j] = false;

            dfs(a[i][0], a[i][1]);
            if (!visited[a[i][1]])
            {
                cout << "NO\n";
            }
            else
                cout << "YES\n";
        }
    }
    return 0;
}