#include<bits/stdc++.h>
using namespace std;
int a[20], n = 20, x;

void solve(){
	bool stop = false;
	while(!stop)
	{
		int i = n - 1;
		while (i >= 0 && a[i] == 9)
		{
			a[i] = 0;
			i--;
			
		} 
		if(i >= 0)
		{
			a[i] = 9;
		} 
	
		long long sum = 0;
		for(int i = 0; i < n; i++) sum = sum*10 + a[i];
		
		if(sum && sum % x == 0){
			cout << sum << '\n';
			return;
		}
	}
}

main(){
	int t; cin >> t;
	while(t--)
	{
		cin >> x;
		for(int i = 0; i < n; i++) a[i] = 0;
		solve();
	}
	return 0;
}
