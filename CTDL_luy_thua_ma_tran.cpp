#include<bits/stdc++.h>
using namespace std;

int n, k, m = 1e9 + 7;
long long a[15][15], b[15][15];

void mu(long long c[][15], long long d[][15])
{
    long long e[15][15];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            long long s = 0;
            for (int x = 0; x < n; x++)
                s = (s % m + (c[i][x] % m * d[x][j] % m) % m) % m;
            e[i][j] = s;
        }
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = e[i][j];
}

void abc(int k)
{
    if (k == 1) return;
    abc(k / 2);
    mu(a, a);
    if (k % 2) mu(a, b);
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }
        abc(k);
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = (ans + a[i][0]) % m;
        }
        cout << ans << '\n';
    }
    return 0;
}
