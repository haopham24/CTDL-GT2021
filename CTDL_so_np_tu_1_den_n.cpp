#include <bits/stdc++.h>
using namespace std;

long long binary(int n)
{
	vector<int> a;
	while(n)
	{
		a.push_back(n % 2);
		n /= 2;
	}
	long long ans = 0;
	for(int i = a.size() - 1; i >= 0; i--) ans = ans * 10 + a[i];
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++) cout << binary(i) << ' ';
		cout << '\n';
	}
    return 0;
}

