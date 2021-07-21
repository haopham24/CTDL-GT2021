#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;cin>>t;
	while(t--)
	{
		int v, e;
		cin >> v >> e;
		int a[v+5][v+5]={};
		int n, m;
		while(e--)
		{
			cin >> n >> m;
			a[n][m] = 1;

		}
		for(int i = 1; i <= v; i++)
		{
			cout << i << ": ";
			for(int j = 1; j <= v; j++)
			{
				if(a[i][j]) cout << j << ' ';
			}
			cout << endl;
		}
	
	}
    return 0;
}

