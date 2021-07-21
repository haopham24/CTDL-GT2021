#include <bits/stdc++.h>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	vector<long long> a;
	long long n, x;
	while(t--)
	{
		cin >> n;
		a.resize(n);
		for(int i = 0;i < n; i++) 
		{
			cin >> a[i];			
		}
		int Min=1000000, ans=0;
		for(int i = 0; i < n - 1; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(abs(a[i] + a[j]) < Min)
				{
					Min = abs(a[i] + a[j]);
					ans = a[i] + a[j];
				}
			}
		}
		
		cout << ans << endl;
	}

    return 0;
}
