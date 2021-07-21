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
		int x, cnt = 0;
		while (n--)
		{
			cin >> x;
			if (x == 0)
				cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}
