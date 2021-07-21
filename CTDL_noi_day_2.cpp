#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		priority_queue<long long, vector<long long> , greater<long long> > q;
		long long n;
		cin>>n;
		long long t;
		while(n--)
		{
			cin>>t;
			q.push(t);
		}
		long long ans=0;
		while(q.size()>1)
		{
			long long a=0;
			a = (a + q.top()) % mod;
			q.pop();
			a = (a + q.top()) % mod;
			q.pop();
			ans = (ans+a) % mod;
			q.push(a);
			
		}
		cout<<ans<<'\n';
	}

    return 0;
}
