#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int n, s, m;
		cin >> n >> s >> m;
		
		int ngaymua = s - s/7;
		int ans = -1;
		if(s*m <= ngaymua*n)
		{
			for(int i = 1; i <= ngaymua; i++)
			{
				if(n*i >= s*m)
				{
					ans = i;
					break;
				}
			}
		}
		cout << ans << '\n';
	
	}
    return 0;
}

