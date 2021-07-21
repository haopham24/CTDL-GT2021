#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long dp[55]={};
	dp[1] = 1; dp[2] = 2; dp[3] = 4;
	int n;
	cin >> n;
	for(int i = 4; i <= n; i++)
	{
		dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
	}
	cout << dp[n] << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	
	
    return 0;
}
