/*
Một đồ thị N đỉnh là một cây, nếu như nó có đúng N-1 cạnh và giữa 2 đỉnh bất kì, chỉ tồn tại duy nhất 1 đường đi giữa chúng.

Cho một đồ thị N đỉnh và N-1 cạnh, hãy kiểm tra đồ thị đã cho có phải là một cây hay không?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test bắt đầu bởi số nguyên N (1 ≤ N ≤ 1000).
N-1 dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối giữa đỉnh u và v.
Output: 

Với mỗi test, in ra “YES” nếu đồ thị đã cho là một cây, in ra “NO” trong trường hợp ngược lại.

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> edge[1100];
bool visited[1100];

void dfs(int u)
{
    visited[u] = true;
    for (int i = 0; i < edge[u].size(); i++)
    {
        if (!visited[edge[u][i]])
            dfs(edge[u][i]);
    }
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 1100; i++) edge[i].clear();
        memset(visited, false, sizeof(visited));
        int n;
        cin >> n;
        for (int i = 1; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        dfs(1);
        bool check = true;
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                cout << "NO\n";
                check = false;
                break;
            }
        }
        if (check) cout << "YES\n";
    }
    return 0;
}