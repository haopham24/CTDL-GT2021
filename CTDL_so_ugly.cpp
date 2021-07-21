#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		long long u[n];
		u[0] = 1;
		long long i5 = 0, i2 = 0, i3 = 0;
		for (int i = 1; i < n; i++)
		{
			u[i] = min(u[i2] * 2, min(u[i3] * 3, u[i5] * 5));
			if (u[i] == u[i2] * 2) i2++;
			if (u[i] == u[i3] * 3) i3++;
			if (u[i] == u[i5] * 5) i5++;
		}
		cout << u[n - 1] << '\n';
	}
	return 0;
}
