#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int cnt = 0;
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n-1; i++)
		{
			for(int j = i+1; j < n; j++)
			{
				if(a[i] + a[j] == k) cnt++;
			}
		}
		cout << cnt << endl;
	}
    return 0;
}

