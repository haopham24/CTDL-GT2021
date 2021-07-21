#include<bits/stdc++.h>
using namespace std;

struct job{
    int s,f;
};

bool cmp(job a, job b)
{
    if(a.f < b.f) return true;
    return false;
}

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        job a[n];
        for(int i = 0; i < n; i++) cin >> a[i].s;
        for(int i = 0; i < n; i++) cin >> a[i].f;
        sort(a, a+n, cmp);
        int ans = 0, i = 0;
        for(int j = i+1; j < n; j++)
        {
            if(a[i].f <= a[j].s)
            {
                i = j;
                ans++;
            }
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}