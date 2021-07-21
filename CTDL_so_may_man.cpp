#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
	int n7 = 0, n4 = 0;
	n7 = n/7;
	while(n7 >= 0)
	{
		int x = (n - n7 * 7);
		if(x % 4 == 0)
		{
			n4 = x / 4;
			break;
		}
		n7--;
	}
	if(n7 < 0) cout << "-1\n";
	else{
		for(int i = 0; i < n4; i++) cout <<4;
		for(int i = 0; i < n7; i++) cout <<7;
		cout << '\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin >>n;
		solve(n);
	}
    return 0;
}

