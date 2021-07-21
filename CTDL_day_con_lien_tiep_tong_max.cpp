#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int ans = 0;
		for(int i = 0; i < n; i++)
		{
			int sum = 0;
			for(int j = i; j < n; j++)
			{
				sum += a[j];
				ans = max(sum, ans);
				if(sum < 0 ) sum = 0;
			}
		}
		cout << ans << '\n';
	}
    return 0;
}

