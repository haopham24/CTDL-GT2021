#include <bits/stdc++.h>
using namespace std;


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int E[n+1] = {};
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            E[a]++;
            E[b]++;
        }
        int le = 0, chan = 0;
        for(int i = 1; i <= n; i++)
        {
            int x = E[i];
            if(x % 2 == 0) chan++;
            else le++;
        }
        if(chan == n) cout << "2\n";
        else if(le == 2) cout << "1\n";
        else cout << "0\n";
        
    }

    return 0;
}
