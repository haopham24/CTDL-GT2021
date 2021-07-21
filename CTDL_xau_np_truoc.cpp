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
		int i = s.length() - 1;
		while(s[i] == '0') i--;
		if(i >= 0)
		{
			s[i] = '0';
			for(int j = i+1; j < s.length(); i++) s[i] = '1';
		}
		else for(int x = 0; x < s.length(); x++) s[x] = '1';
		
		cout << s << '\n';
	}
    return 0;
}

