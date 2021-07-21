#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n], max = -300000, min = 300000;
		vector<int> dd(100000, 0);
		int dem = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] > max)
				max = a[i];
			if (a[i] < min)
				min = a[i];
			if (dd[a[i]] == 0)
				dem++;
			dd[a[i]]++;
		}
		int ans = max - min + 1 - dem;
		cout << ans << '\n';
	}
	return 0;
}
