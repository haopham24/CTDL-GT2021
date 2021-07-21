#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int t = 1;
	// cin >> t;
	while(t--)
	{
		int n, ans = 0;
		cin >> n;
		int a[2000], d[2000]={};
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		for(int i = 1; i <= n; i++)
		{
			d[i] = 1;
			for(int j = 1; j < i; j++)
			{
				if(a[i] > a[j]) d[i] = max(d[i], d[j]+1);
			}
			ans = max(ans, d[i]);
		}
		cout << ans << '\n';
	}
    return 0;
}

