#include <bits/stdc++.h>
using namespace std;

long long m = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		long long a[100005]={};
		a[0] = 1;
		long long n, k ;
		cin >> n >> k;
		for(long long i = 1; i <= n; i++)
		{
			for(long long j = 1; j <= min(i,k); j++)
			{
				a[i] = (a[i] +a[i-j]) % m;
			}
		}
		cout << a[n] << endl;
	}
	
	
    return 0;
}

