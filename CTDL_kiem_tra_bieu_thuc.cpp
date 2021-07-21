#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	
	while(t--)
	{
		int res;
		string s;
		getline(cin, s);
		stack <char> st;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == ')')
			{
				res = 1;
				char x = st.top();
				st.pop();
				while(x != '(')
				{
					if(x == '/' || x == '-' || x == '+' || x == '*')
					res = 0;
					x = st.top();
					st.pop();
				}
				if(res == 1) break;
			}
			else st.push(s[i]);
		
		}
		if(res == 1) cout << "Yes";
		else cout << "No";
		
		cout<<endl;
	}

    return 0;
}

