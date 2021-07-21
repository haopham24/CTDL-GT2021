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
        int vao[n+1] = {};
        int ra[n+1] = {};
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            ra[a]++;
            vao[b]++;
        }
        int ans = 1;
        for(int i = 1; i <= n; i++)
        {
            if(ra[i] != vao[i]) ans = 0;
        }
        cout << ans << endl;
        
    }

    return 0;
}
