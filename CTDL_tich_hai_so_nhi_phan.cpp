#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		string a,b;
		cin >> a >> b;
		int p = 1;
		int x = 0, y = 0;
		for(int i = a.length()-1; i >= 0; i--)
		{
			x += (int)(a[i]-'0') * p;
			p *= 2;
		}
		p = 1;
		for(int i = b.length()-1; i >= 0; i--)
		{
			y += (int)(b[i]-'0') * p;
			p *= 2;
		}
		cout << x * y << endl;
	}
    return 0;
}

