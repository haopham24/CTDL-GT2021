#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	cin.ignore();
	string s;
	stack<int> a;
	while(t--)
	{
		cin >> s;
		if(s == "PUSH")
		{
			int x;
			cin >> x;
			cin.ignore();
			a.push(x);
		}
		if(s == "POP")
		{
			if(!a.empty())
			{
				a.pop();
			}
		}
		if(s == "PRINT")
		{
			if(!a.empty()) cout << a.top() << '\n';
			else cout << "NONE\n";
		}
	
	}
    return 0;
}

