#include <bits/stdc++.h>
using namespace std;

int n, a[20][20];
vector<string> ans;
int check;


void Try(int i, int j, string s)
{
	if(i == 1 && j == 1 && a[i][j] == 0) return;
	if(i == n && j == n && a[i][j] == 1)
	{
		ans.push_back(s);
		check = 1;
		return;
	}
	if(i < n && a[i+1][j])
	{
		Try(i+1, j, s+"D");
	}
	if(j < n && a[i][j+1])
	{
		Try(i, j+1, s+"R");
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
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++) cin >> a[i][j];
		}
		ans.clear();
		check = 0;
		Try(1,1,"");
		if(check == 0)
		{
			cout << -1;
		}
		else {
			sort(ans.begin(), ans.end());
			for(int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';		
		}
		cout << endl;
	}
    return 0;
}

