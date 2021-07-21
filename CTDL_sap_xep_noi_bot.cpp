#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
//	int t;cin>>t;
	int t = 1;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n],b[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i]= a[i];
		}
		sort(b, b+n);
		for(int i = 0; i < n; i++)
		{
			bool ok = 1;
			for(int j = 0; j < n; j++)
			{
				if(a[j] != b[j]) ok = 0;
			}
			if(ok == 1) break;
			for(int j = 0; j < n-1; j++)
			{
				if(a[j] > a[j + 1]) swap(a[j], a[j+1]);
			}
			cout << "\nBuoc " << i+1 <<": ";
			for(int j = 0; j < n; j++) cout << a[j] << ' ';
		}
	}
    return 0;
}

