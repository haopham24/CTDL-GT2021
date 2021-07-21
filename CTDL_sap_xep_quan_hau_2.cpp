#include <bits/stdc++.h>
using namespace std;

int a[10][10], hang[10], cot[10], xuoi[20], nguoc[20],c[10];
int ans;

void Try(int i)
{	
	for(int j = 1; j <= 8; j++)
	{
		if(!hang[j] && !cot[j] && !xuoi[i-j+8] && !nguoc[i+j-1])
		{
			c[i] = j;
			hang[j] = cot[j] = xuoi[i-j+8] = nguoc[i+j-1] = 1;
			if(i == 8)
			{
				int sum = 0;
				for(int x  = 1; x <= 8; x++) sum += a[x][c[x]];
				ans = max (ans, sum);
			}
			else Try(i+1);
			hang[j] = cot[j] = xuoi[i-j+8] = nguoc[i+j-1] = 0;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		for(int i = 1; i <= 8; i++)
		{
			for(int j = 1; j <= 8; j++) cin >> a[i][j];
		}
		for(int i = 1; i <= 8; i++) hang[i] = cot[i] = 0;
		for(int i = 1; i <= 20; i++) xuoi[i] = nguoc[i] = 0;
		ans = -1;
		Try(1);
		cout << ans << endl;
	}
    return 0;
}

