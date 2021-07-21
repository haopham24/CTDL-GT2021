#include<bits/stdc++.h>
using namespace std;

int a[20], n;

void show()
{
    for(int i = 1; i <= n; i++){
        if(a[i] == 0) cout << 6;
        else cout << 8;    
    }
    cout << ' ';
}

void sinh(int t)
{
    for(int i = 0; i <= 1; i ++)
    {
        a[t] = i;
        if(t == n) {
        show();
        }
        else sinh(t+1);
    }
    

}

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << pow(2,n) << '\n';
        sinh(1);
        cout << '\n';
    }
    
}