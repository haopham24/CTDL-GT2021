#include <bits/stdc++.h>
using namespace std;

long long m = 123456789;


long long mu(long long n)
{
	if(n == 0) return 1;
	if(n == 1) return 2;
	long long x = mu(n/2);
	if(n%2 == 1) return 2 * (x%m * x%m) % m;
	return (x%m * x%m) % m;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		long long n;
		cin >> n;
		n--;
		cout << mu(n)<< '\n';
	
	}
    return 0;
}

