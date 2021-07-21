#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;cin>>t;
	while(t--)
	{
		long long k;
		string s;
		cin >> k ;
		cin >> s;
		int dd[300] = {};
		for(int i = 0; i < s.length(); i++) dd[s[i]]++;
		priority_queue<long long, vector<long long> > a;
		for(int i = 1; i < 300; i++){
			if(dd[i]) a.push(dd[i]);
		}
		while(k && !a.empty())
		{
			long long h = a.top(); a.pop();
            h--;
            a.push(h);
            k--;
		}
		long long ans = 0;
        while(!a.empty())
        {
            ans += a.top() * a.top();
            a.pop();
        }
        cout << ans << '\n';
	}
    return 0;
}

