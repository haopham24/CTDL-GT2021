#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin, s);
		vector<string> a;
		string b = "";
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == ' ')
			{
				a.push_back(b);
				b = "";
			}
			else if(i == s.length()-1)
			{
				b += s[i];
				a.push_back(b);
			}
			else b += s[i];
		}
		for(int i = a.size()-1; i >= 0; i--) cout << a[i] << ' ';
		cout << '\n';
	
	}
    return 0;
}

