#include<bits/stdc++.h>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int ans = 0;
		for(int i = 0; i < n; i++)
		{
			int min = 100000, m = i;
			for(int j = i; j < n; j++)
			{
				if(a[j] < min)
				{
					min = a[j];
					m = j;
				}
			}
			if(m != i)
			{
				ans++;
				swap(a[i], a[m]);
			}
		}
		cout << ans << endl;
	}
	
}
