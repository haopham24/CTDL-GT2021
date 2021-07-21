#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;
long long luythua(long long a, long long b)
{
	if(b==0) return 1;
	if(b==1) return a;
	if(b%2==0)
	{
		long long x= luythua(a,b/2)%mod;
		return (x*x)%mod;
	}
	else
	{
		long long x=luythua(a,b/2)%mod;
		long long y=(x*a)%mod;
		return (x*y)%mod;
	}
	
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long a,b;
		cin>>a>>b;
		if(a==0 && b==0) break;
		cout<<luythua(a,b)<<endl;	
	}
	
	
    return 0;
}

