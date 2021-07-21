#include<bits/stdc++.h>
using namespace std;

int count(long long x, long long b[], int dd[], int m)
{
    int ans = 0;
    if(x == 0) return 0;
    if(x == 1) return dd[0];
    if(x == 2) ans -= dd[3] + dd[4];
    if(x == 3) ans += dd[2];
    int h = upper_bound(b, b+m, x) - b;
    ans += m - h + dd[0] + dd[1];
    return ans;
}

main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long a[n], b[m];
        int dd[5] = {};
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
            if(b[i] < 5) dd[b[i]]++;
        }
        int ans = 0;
        sort(b, b+m);
        for(int i = 0; i < n; i++)
        {
            ans += count(a[i], b, dd, m);
        }
        cout << ans << '\n';
    }
    
}