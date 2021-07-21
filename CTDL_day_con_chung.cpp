#include<bits/stdc++.h>
using namespace std;

main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2 , n3;
        cin >> n1 >> n2 >> n3;
        long long a[n1], b[n2], c[n3];
        vector<long long> d;
        for(int i = 0; i < n1; i++) cin >> a[i];
        for(int i = 0; i < n2; i++) cin >> b[i];
        for(int i = 0; i < n3; i++) cin >> c[i];
        int x = 0, y = 0, z = 0;
        while(x <= n1 && y <= n2 && z <= n3)
        {
            long long Min = min(a[x], b[y]);
            Min = min(Min, c[z]);
            long long Max = max(a[x],b[y]);
            Max = max(Max, c[z]);
            if(Min == Max){
                d.push_back(Min);
                x++; y++; z++;
            }
            while(a[x] < Max) x++;
            while(b[y] < Max) y++;
            while(c[z] < Max) z++;  
        }
        if(d.size() == 0) cout << "NO";
        else 
        {
            for(int j = 0; j < d.size(); j++) 
                cout << d[j] << ' ';
        }
        cout << '\n';
        
    }
    
}