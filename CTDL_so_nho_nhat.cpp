#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int s, d;
		cin >> s >> d;
		stack<int> st;
		while(s > 0)
		{
			if(s > 9)
			{
				st.push(9);
				s -= 9;
			}
			else{
				st.push(s);
				s = 0;
			}
			d--;
		}
		
		if (d < 0) cout << "-1";
		else 
		{
			if(d > 0)
			{
				int h = st.top();
				st.pop()
				st.push(h-1);
				while(d > 1)
				{
					d--;
					st.push(0);
				}
				st.push(1);
				
			}
			while(!st.empty())
			{
				cout << st.top();
				st.pop();
			}
		}
		cout << '\n';
	}
    return 0;
}

