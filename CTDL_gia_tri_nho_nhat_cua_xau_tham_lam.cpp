#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int k;
		string s;
		cin >> k ;
		cin >> s;
		int dd[300] = {};
		for(int i = 0; i < s.length(); i++) dd[s[i]]++;
		vector<int> a;
		for(int i = 1; i < 300; i++){
			if(dd[i]) a.push_back(dd[i]);
		}
		while(k--)
		{
			sort(a.begin(), a.end(), greater<int>());
			if(a[0]) a[0]--;
		}
		int ans = 0;
		for(int i = 0; i < a.size(); i++) ans += a[i]*a[i];
		cout << ans << '\n';
	
	}
    return 0;
}

