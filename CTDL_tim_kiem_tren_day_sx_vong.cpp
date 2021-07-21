#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;cin>>t;
	while(t--)
	{
		int n, x, ans;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i] == x) ans = i + 1;
		}
		cout << ans << '\n';
	}
    return 0;
}

