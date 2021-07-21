#include <bits/stdc++.h>
using namespace std;

bool snt(int n)
{
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}

int solve(int n)
{
	for(int i = 2; i <= n/2; i++)
	{
		if(snt(i) && snt(n-i)) return i;
	}
	return -1;
}

int main()
{
	
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		int x = solve(n);
		if(x == -1) cout << "-1\n";
		else cout << x << ' ' << n-x << '\n';
	}
    return 0;
}

