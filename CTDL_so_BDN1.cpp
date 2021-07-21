#include<bits/stdc++.h>
using namespace std;

main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<int> a;
        while(n)
        {
            a.push_back(n%10);
            n /= 10;
        }

        reverse(a.begin(), a.end());

        int pos = a.size();
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] > 1)
            {
                pos = i;
                break;
            }
        }
        for(int i = pos; i <= a.size(); i++) a[i] = 1;
        long long ans = 0;
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i])
            {
                int x = a.size() - i - 1;
                ans += pow(2,x);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}