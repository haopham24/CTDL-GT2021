
#include <bits/stdc++.h>
using namespace std;

void solve(string s, string& str, int k, int x)
{
    if (k == 0)
        return;

    int n = s.length();

    char Max = s[x];

    for (int i = x + 1; i < n; i++)
    {
        if (Max < s[i])
            Max = s[i];
    }

    if (Max != s[x])
        k--;

    for (int i = x; i < n; i++)
    {
        if (s[i] == Max)
        {
            swap(s[x], s[i]);

            if (s > str)
                str = s;

            solve(s, str, k, x + 1);
            swap(s[x], s[i]);
        }
    }
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string s, str;
        cin >> k >> s;
        str = s;
        solve(s, str, k, 0);
        cout << str << '\n';
    }
    return 0;
}