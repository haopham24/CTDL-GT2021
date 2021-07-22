#include <bits/stdc++.h>
using namespace std;

int n;

void show(int a)
{
	for(int i = n-1; i >= 0; i--)
	{
		cout << ((a >> i) & 1) ;
		
	}
	cout << '\n';
}
int count(int a)
{
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{
		cnt += ((a >> i) & 1) ;	
	}
	return cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int k;
		cin >> n >> k;
		for(int i = 0; i < (1 << n); i++) 
		{
			if(count(i) == k) show(i);
		}
//		cout << '\n';
	}
    return 0;
}