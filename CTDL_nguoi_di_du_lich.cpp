#include <bits/stdc++.h>
using namespace std;

long long n, chuaxet[20], c[20][20], a[20], ans = 1e18, m = 1e18, s, x[20];

void Try(int i)
{
	if(s + (n-i+1) * m >= ans) return ;
	for(int j = 1; j <= n; j++)
	{
		if(!chuaxet[j])
		{
			x[i] = j;
			chuaxet[j] = 1;
			s += c[x[i-1]][x[i]];
			if(i == n)
			{
				if(s + c[x[i]][1] < ans) ans = s + c[x[i]][1];
			}
			else Try(i+1);
			s -= c[x[i-1]][x[i]];
			chuaxet[j] = 0;
		}
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> c[i][j];
			if (c[i][j] != 0) m = min(m, c[i][j]);
		}
	}
	chuaxet[1] = 1;
	x[1] = 1;
	Try(2);
	cout << ans << '\n';
    return 0;
}

