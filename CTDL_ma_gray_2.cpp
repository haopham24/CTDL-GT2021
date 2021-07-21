#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		string s;
		cin >> s;
		string ans =s;
		for(int i = 1; i < s.length(); i++)
		{
			if(s[i] == ans[i-1]) ans[i] = '0';
			else ans[i] = '1';
		}
		cout << ans << '\n';
	}
    return 0;
}

