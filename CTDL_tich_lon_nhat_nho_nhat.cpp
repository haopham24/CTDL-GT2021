#include<bits/stdc++.h>
using namespace std;

main()
{
    int t; cin >> t;
    while(t--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        int a[n1], b[n2];
        int Max = -100000020, Min = 100000008;
        for(int i = 0; i < n1; i++){
            cin >> a[i];
            if(a[i] > Max) Max = a[i];
        }
        for(int i = 0; i < n2; i++){
            cin >> b[i];
            if(b[i] < Min) Min = b[i];
        }
        long long ans = Max * Min;
        cout << ans << '\n';

    }

    return 0;
}