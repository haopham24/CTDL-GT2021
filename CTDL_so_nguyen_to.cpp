#include <bits/stdc++.h>
using namespace std;

int a[105], n, k, p, s;
bool kt[205], ok[205];
vector<vector<int> > res;

void sang()
{
	for (int i = 2; i <= 200; i++)
	{
		if (!kt[i])
			a[k++] = i;
		for (int j = i * i; j <= 200; j += i)
		{
			kt[j] = true;
		}
	}
}

void Try(int i, int sum, vector<int> v)
{
	if (sum == s && v.size() == n)
	{
		res.push_back(v);
		return;
	}
	if (sum > s)
		return;
	for (int j = i; j < k; j++)
	{

		if (ok[j] == false && sum + a[j] <= s && v.size() < n)
		{
			v.push_back(a[j]);
			ok[j] = true;
			Try(j, sum + a[j], v);
			v.pop_back();
			ok[j] = false;
		}
	}
}

main()
{
	int t;
	cin >> t;
	memset(kt, false, sizeof(kt));
	sang();
	while (t--)
	{
		cin >> n >> p >> s;
		memset(ok, false, sizeof(ok));

		vector<int> v;
		res.clear();

		int pos = lower_bound(a + 0, a + k, p + 1) - a;
		Try(pos, 0, v);

		cout << res.size() << '\n';
		for (int i = 0; i < res.size(); i++)
		{

			for (int j = 0; j < res[i].size() - 1; j++)
			{
				cout << res[i][j] << " ";
			}
			cout << res[i][res[i].size() - 1] << '\n';
		}
	}
}