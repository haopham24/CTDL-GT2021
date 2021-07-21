#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int j = 0;
		while(a[j] <= x) j++;
		if(j == 0 && a[j] > x) cout <<"-1\n";
		else cout << j <<'\n';
	}
    return 0;
}

