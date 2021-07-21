#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		string a;
		cin >> a;
		int i = a.length() - 1;
		while(a[i] != '0') i--;
		if(i >= 0)
		{
			a[i] = '1';
			for(int j = i + 1; j < a.length(); j++) a[j] = '0';
		}
		else
			for(int x = 0; x < a.length(); x++) a[x] = '0';
		cout<<a<<'\n';
	}
    return 0;
}

