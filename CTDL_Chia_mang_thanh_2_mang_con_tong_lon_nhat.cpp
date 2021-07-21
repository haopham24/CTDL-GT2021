#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a+n);
		int sum1 = 0, sum2 = 0, ans = 0;
		for(int i = 0; i < n; i++)
		{
			if(i < k) sum1 += a[i];
			else sum2 += a[i];
		}
		ans = abs(sum1 - sum2);
		sum1 = 0;
		sum2 = 0;
		for(int i = 0; i < n; i++)
		{
			if(i < n-k) sum1 += a[i];
			else sum2 += a[i];
		}
		ans = max(ans, abs(sum1 - sum2));
		cout << ans << '\n';
	
	}
    return 0;
}

