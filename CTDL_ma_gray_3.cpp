#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;cin>>t;
	while(t--)
	{
		string s;
		cin >> s;
		string ans = s;
		for(int i = 1; i < ans.length(); i++)
		{
			if(s[i-1] == s[i]) ans[i] = '0';
			else ans[i] = '1';
		}
		
		cout << ans << '\n';
	
	}
    return 0;
}

