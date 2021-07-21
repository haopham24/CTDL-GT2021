#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin >> n;
    vector<int> a,b;
    int c;
    for(int i = 0; i < n; i++)
    {
        cin >> c;
        if(i % 2 == 0) a.push_back(c);
        else b.push_back(c);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    int A = 0, B = 0;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0) cout << a[A++] << ' ';
        else cout << b[B++] << ' ';
    }
}