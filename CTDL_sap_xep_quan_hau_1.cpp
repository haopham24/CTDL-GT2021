#include <bits/stdc++.h>
using namespace std;

int a[15][15], hang[15], cot[15], xuoi[25], nguoc[25], c[15], n;
int ans;

void Try(int i)
{	
	for(int j = 1; j <= n; j++)
	{
		if(!hang[j] && !cot[j] && !xuoi[i-j+n] && !nguoc[i+j-1])
		{
			c[i] = j;
			hang[j] = cot[j] = xuoi[i-j+n] = nguoc[i+j-1] = 1;
			if(i == n)
			{
				ans++;
			}
			else Try(i+1);
			hang[j] = cot[j] = xuoi[i-j+n] = nguoc[i+j-1] = 0;
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
		cin >> n;
		for(int i = 1; i <= n; i++) hang[i] = cot[i] = 0;
		for(int i = 1; i <= 25; i++) xuoi[i] = nguoc[i] = 0;
		ans = 0;
		Try(1);
		cout << ans << endl;
	}
    return 0;
}

