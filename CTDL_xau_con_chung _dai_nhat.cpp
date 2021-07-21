#include<bits/stdc++.h>
using namespace std;

int a[1010][1010]={};

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        
        int ans = 0;
        for(int i = 1; i < s1.length(); i++)
        {
            for(int j = 1; j < s2.length(); j++)
            {
                if(s1[i-1] == s2[j-1]) a[i][j] = a[i-1][j-1] + 1;
                else a[i][j] = max(a[i][j-1], a[i-1][j]);
                ans = max(ans, a[i][j]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}