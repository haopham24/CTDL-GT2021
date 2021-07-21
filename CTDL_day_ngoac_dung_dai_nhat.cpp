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
		stack<int> a;
		int ans = 0;
		a.push(-1);
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == '(') a.push(i);
			else if(s[i] == ')')
			{
				a.pop();
				if(!a.empty())
				{
					ans = max(ans, i-a.top());
				}
				if(a.empty()) a.push(i);
			}
		}
		cout << ans << '\n';
	
	}
    return 0;
}

