#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n], b[n-1];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n-1; i++) cin >> b[i];
		int j = 0;
		while(a[j] == b[j]) j++;
		cout << j+1 << '\n';
	}
    return 0;
}

