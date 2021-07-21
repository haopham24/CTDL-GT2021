#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin >> n;
    cin.ignore();
    int a[n+1][n+1] = {};
    string s;
    for(int i = 1; i <= n; i++)
    {
        getline(cin, s);
        s += " ";
        int so = 0;
        for(int j = 0; j < s.length(); j++)
        {
            if(s[j] >= '0' && s[j] <= '9')
            {
                so = so*10 + (int)(s[j] - '0');
            }
            else if(so > 0)
            {
                a[i][so] = 1;
                so = 0;
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) cout << a[i][j] << ' ';
        cout << '\n';
    }
}
