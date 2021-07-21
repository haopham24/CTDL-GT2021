#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int t;
	cin>>t;
	queue <int> qu;
	while(t--)
	{
		int x;
		cin>>x;
		if(x==1)
		{
			cout<<qu.size()<<endl;
		}
		if(x==2)
		{
			if(qu.empty()) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		if(x==3)
		{
			int n;
			cin>>n;
			qu.push(n);
		}
		if(x==4)
		{
			if(!qu.empty()) qu.pop();
		}
		if(x==5)
		{
			if(qu.empty()) cout<<-1<<endl;
			else cout<<qu.front()<<endl;
		}
		if(x==6)
		{
			if(qu.empty()) cout<<-1<<endl;
			else cout<<qu.back()<<endl;
		}
		
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--) solve();
	

    return 0;
}

