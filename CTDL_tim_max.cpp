#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		long long a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		long long ans = 0;
		for (int i = 0; i < n; i++)
			ans = (ans + ((a[i] % mod) * i) % mod) % mod;
		cout << ans << '\n';
	}
	return 0;
}
