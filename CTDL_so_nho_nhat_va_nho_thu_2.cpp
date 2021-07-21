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
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		int min = a[0], min2 = a[0];
		for(int i = 0; i < n; i++)
		{
			if(a[i] > a[0]){
				min2 = a[i];
				break;
			}
		}
		if(min2 == a[0]) cout << -1 <<'\n';
		else cout << a[0] <<' '<< min2 << '\n';
	}
    return 0;
}

