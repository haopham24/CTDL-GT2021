#include<bits/stdc++.h>
using namespace std;

main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        int dd[100005] = {};
        vector<int> Intersection, Union;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(!dd[a[i]])
            {
                dd[a[i]] = 1;
                Union.push_back(a[i]);
            }
        }
        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
            if(dd[b[i]] == 0)
            {
                dd[b[i]] = 2;
                Union.push_back(b[i]);
            }
            else if(dd[b[i]] == 1)
            {
                dd[b[i]] = 2;
                Intersection.push_back(b[i]);
            }
        }
        sort(Union.begin(), Union.end());
        sort(Intersection.begin(), Intersection.end());
        for(int i = 0; i < Union.size(); i++) cout << Union[i] << ' ';
        cout << endl;
        for(int i = 0; i < Intersection.size(); i++) cout << Intersection[i] << ' ';
        cout << endl;

    }
    
}