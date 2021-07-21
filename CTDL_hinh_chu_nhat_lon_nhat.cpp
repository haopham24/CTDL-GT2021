#include <bits/stdc++.h>
using namespace std;

long long a[1000006], L[1000006], R[1000006];

void solve()
{
	long long n;
	cin >> n;
	stack <long long> st;
	for(long long i = 0; i < n; i++) cin >> a[i];

	for(long long i = 0; i < n; i++)
	{
		while (!st.empty() && a[st.top()] >= a[i]) st.pop();
		if(!st.empty()) L[i] = st.top()+1;
		else L[i] = 0;
		st.push(i);
	}

	stack <long long> sk;
	for(long long  i = n-1; i >= 0; i--)
	{
		while ( !sk.empty() && a[sk.top()] >= a[i]) sk.pop();
		if(!sk.empty()) R[i] = sk.top()-1;
		else R[i] = n-1;
		sk.push(i);
	}
	long long ans = 0;
	for(long long i = 0; i < n; i++)
	{
		ans = max(ans, a[i]*(R[i]-L[i]+1));
	}
	cout << ans << endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--) solve();

    return 0;
}

