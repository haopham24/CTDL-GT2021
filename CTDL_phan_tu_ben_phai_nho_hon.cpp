#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5], b[n + 5], c[n + 5];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        a[0] = -1;
        stack<int> s;
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
        s.push(n);
        for (int i = n - 1; i > 0; i--)
        {
            while (!s.empty() && a[i] >= a[s.top()])
                s.pop();
            if (!s.empty())
                b[i] = s.top();
            else
                b[i] = 0;
            s.push(i);
        }
        stack<int> x;
        x.push(n);
        for (int i = n - 1; i > 0; i--)
        {
            while (!x.empty() && a[i] <= a[x.top()])
                x.pop();
            if (!x.empty())
                c[i] = x.top();
            else
                c[i] = 0;
            x.push(i);
        }
        for (int i = 1; i <= n; i++)
            cout << a[c[b[i]]] << ' ';
        cout << '\n';
    }
    return 0;
}