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
		int dd[15]={};
	
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			int h = a[i];
			while(h)
			{
				int x = h % 10;
				dd[x]++;
				h /= 10;
			}
		}
		for(int i = 0; i <= 9; i++)
		{
			if(dd[i]) cout << i <<' ';
		}
		cout << '\n';
	}
    return 0;
}

