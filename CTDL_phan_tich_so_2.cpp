#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[15];
vector<vector<int>> res;

void solve(int i, int s, vector<int> v)
{
	if (s == n)
	{
		res.push_back(v);
		return;
	}
	if (s > n)
		return;
	for (int j = i; j < n; j++)
	{
		if (s + a[j] <= n)
		{
			v.push_back(a[j]);
			solve(j, s + a[j], v);
			v.pop_back();
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
			a[i] = n - i;

		vector<int> v;
		res.clear();
		solve(0, 0, v);

		cout << res.size() << endl;
		for (int i = 0; i < res.size(); i++)
		{
			cout << "(";
			for (int j = 0; j < res[i].size() - 1; j++)
			{
				cout << res[i][j] << " ";
			}
			cout << res[i][res[i].size() - 1] << ") ";
		}
		cout << endl;
	}
}