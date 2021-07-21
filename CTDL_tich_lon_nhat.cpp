#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    int res = max(a[0] * a[1], a[0] * a[1] * a[2]);
    res = max(res, a[n-1] * a[n-2]);
    res = max(res, a[n-1] * a[n-2] * a[n-3]);
    cout << res ;
    return 0;
}