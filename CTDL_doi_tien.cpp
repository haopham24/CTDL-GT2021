#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int t;cin>>t;
	while(t--)
	{
		int n, ans = 0;
		cin >> n;
		for(int i = 0; i < 10; i++)
		{
			ans += n/a[i];
			n %= a[i];
		}
		cout << ans << '\n';
	}
    return 0;
}

