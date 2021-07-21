#include<bits/stdc++.h>
using namespace std;

main()
{
	queue <int> q;
	int t;
	cin >>t;
	cin .ignore();
	string s;
	while(t--)
	{
		cin >> s;
		if(s == "PUSH")
		{
			int x;
			cin >> x;
			cin.ignore();
			q.push(x);
		}
		if(s == "POP")
		{
			if(!q.empty()) q.pop();
		}
		if(s == "PRINTFRONT")
		{
			if(q.empty()) cout << "NONE\n";
			else cout << q.front() << '\n';
		}
	}
}
