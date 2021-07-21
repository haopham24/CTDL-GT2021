#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s[0] == '0')
        {
            cout << "0\n";
            continue;
        }
        int n = s.length();
        int a[50] = {};
        a[0] = a[1] = 1;
        for(int i = 2; i <= n; i++)
        {
            if(s[i-1] > '0') a[i] = a[i-1];
            if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] <= '6')) a[i] += a[i-2];
        }
        cout << a[n] << '\n';
    }
    return 0;
}