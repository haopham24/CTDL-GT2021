#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		vector <int> a;
		for(int i = 0; i < n; i++) 
		{
			int x;
			cin >> x;
			if(x != 0) a.push_back(x);
		}
		long long b = 0, c = 0;
		sort(a.begin(), a.end());
		for(int i = 0; i < a.size(); i++)
		{
			if(i % 2 == 0) b = b*10 + a[i];
			else c = c*10 + a[i];
		}
		cout << b+c << endl;
	}
    return 0;
}

