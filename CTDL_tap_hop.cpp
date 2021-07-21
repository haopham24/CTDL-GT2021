#include<bits/stdc++.h>
using namespace std;

int a[25], n, k , s, cnt;

int sum ()
{
    int sum = 0;
    for(int i = 1; i <= k; i++) sum += a[i];
    return sum;
}

void Try(int i)
{
    for(int j = a[i-1]+1; j <= n-k+i; j++)
    {
        a[i] = j;
        if(i == k)
        {
            if(sum() == s) cnt++;
        }
        else Try(i+1);
    }
}

main()
{
    while(1)
    {
        cnt = 0;
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0) break;
        for(int i = 0; i <= k; i++) a[i] = 0;
        Try(1);
        cout << cnt << '\n';
    }
    
    return 0;
}