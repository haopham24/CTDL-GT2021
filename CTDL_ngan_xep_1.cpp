#include <bits/stdc++.h>
using namespace std;

int main()
{	
	string s;
	vector<int> a;
	while(cin >> s)
	{
		if(s == "push")
		{
			int x;
			cin >> x;
			cin.ignore();
			a.push_back(x);
		}
		if(s == "pop")
		{
			if(a.size())
			{
				a.pop_back();
			}
		}
		if(s == "show")
		{
			if(a.size()){
				for(int i = 0; i < a.size(); i++) cout << a[i] << ' ';
				cout << '\n';
			}
			else cout << "empty\n";
		}
	
	}
    return 0;
}

