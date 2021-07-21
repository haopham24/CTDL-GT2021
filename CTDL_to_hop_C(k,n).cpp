#include<bits/stdc++.h>
using namespace std;

long long m = 1e9+7;
long long a[1010][1010];

main()
{
    int t; cin >> t;
    while(t--)
    {
        int k, n;
        cin >> n >> k;
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                if(i == j || j == 0) a[i][j] = 1;
                else a[i][j] = a[i-1][j] + a[i-1][j-1];
                d[i][j] %= m;
            }
        }
        cout << a[n][k] << '\n';
    }
    return 0;
}