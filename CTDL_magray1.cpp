#include <bits/stdc++.h>
using namespace std;

int n, a[15];

void ghi()
{
	int ans[15];
	for(int i = 1; i <= n; i++) ans[i] = a[i];
	for(int i = 2; i <= n; i++)
	{
		if(a[i] == ans[i-1]) ans[i] = 0;
		else ans[i] = 1;
	}
	for(int i = 1; i <= n; i++) cout << ans[i];
	cout << ' ';
}


void sinh()
{
	bool stop = false;
	while(!stop)
	{
		ghi();
		int i = n;
		while( a[i] == 1)
		{
			a[i] = 0;
			i--;
		}
		if(i > 0)
		{
			a[i] = 1;
		}
		else stop = true;
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++) a[i] = 0;
		sinh();
		cout << '\n';
	}
    return 0;
}

