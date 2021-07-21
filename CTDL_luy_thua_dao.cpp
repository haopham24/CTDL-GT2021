#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

long long dao(long long a)
{
	long long b = 0;
	while(a)
	{
		b = b * 10 + a % 10;
		a /= 10;
	}
	return b;
}

long long luythua(long long a, long long b)
{
	if(b == 1) return a % mod;
	long long x =  luythua(a, b/2);
	if(b % 2 == 0)
		return (x  *x % mod);
	else
		return (x * x % mod) * a % mod;
	
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long a;
		cin >> a;
		long long b = dao(a);
		cout << luythua(a, b) << '\n';	
	}	
    return 0;
}

