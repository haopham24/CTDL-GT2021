#include <bits/stdc++.h>
using namespace std;
struct aaa
{
    int val, cnt;
};
int pfm(int s, int t)
{
    set<int> m;
    queue<aaa> q;
    q.push({s, 0});
    while (!q.empty())
    {
        aaa x = q.front();
        q.pop();
        if (x.val == t)
            return x.cnt;
        if (x.val * 2 == t || x.val - 1 == t)
            return x.cnt + 1;
        if (m.find(x.val * 2) == m.end() && x.val < t)
        {
            q.push({x.val * 2, x.cnt + 1});
            m.insert(x.val * 2);
        }
        if (m.find(x.val - 1) == m.end() && x.val > 1)
        {
            q.push({x.val - 1, x.cnt + 1});
            m.insert(x.val - 1);
        }
    }
}
main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int s, t;
        cin >> s >> t;
        cout << pfm(s, t) << '\n';
    }
    return 0;
}