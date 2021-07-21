#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	cin.ignore();
	string s;
	deque<int> a;
	while(t--)
	{
		cin >>s;
		if(s == "PUSHFRONT")
		{
			int x;
			cin >> x;
			cin .ignore();
			a.push_front(x);
		}
		if(s == "PUSHBACK")
		{
			int x;
			cin >> x;
			cin .ignore();
			a.push_back(x);
		}
		if(s == "POPFRONT")
		{
			if(a.size()) a.pop_front();
		}
		if(s == "POPBACK")
		{
			if(a.size()) a.pop_back();
		}
		if(s == "PRINTFRONT")
		{
			if(a.size()) cout << a.front() << endl;
			else cout << "NONE\n";
		}
		if(s == "PRINTBACK")
		{
			if(a.size()) cout << a.back() << endl;
			else cout << "NONE\n";
		}
		
	}
    return 0;
}

