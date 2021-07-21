#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin >> n;
    int a[n+5][n+5], c[n*n][3], t[n+5][2], cx[n+5], m = 1, k = 1, d = 0;
    for(int i = 1; i <= n; i++)
    {
        cx[i] = 1;
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j++)
        {
            if(a[i][j])
            {
                c[k][0] = a[i][j];
                c[k][1] = i;
                c[k][2] = j;
                k++;
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(c[j][0] > c[j+1][0])
            {
                swap(c[j+1][0], c[j][0]);
                swap(c[j+1][1], c[j][1]);
                swap(c[j+1][2], c[j][2]);
            }
        }
    }
    d += c[1][0];
    t[m][0] = c[1][1];
    t[m][1] = c[1][2];
    m++;
    cx[c[1][1]] = 0;
    cx[c[1][2]] = 0;
    for(int i = 2; i < k; i++)
    {
        if(cx[c[i][2]])
        {
            d += c[i][0];
            t[m][0] = c[i][1];
            t[m][1] = c[i][2];
            m++;
            cx[c[i][2]] = 0;
        }
        if(m > n) break;
    }
    cout << "dH = " << d;
    for(int i = 1; i < m; i++)
    {
        cout << '\n' << t[i][0] << ' ' << t[i][1];
    }
}
