#include <bits/stdc++.h>
using namespace std;

int n,k;

int bs(int a[],int l, int r, int key)
{
	while(l <= r)
	{
		int mid = (l + r) / 2;
		if(a[mid] == key) return mid + 1;
		else if(a[mid] < key) l = mid + 1;
		else r = mid - 1;
	}
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		if(bs(a, 0, n - 1, k) == 0) cout <<"NO\n";
		else cout << bs(a, 0, n - 1, k) << '\n';
		
	}
    return 0;
}

