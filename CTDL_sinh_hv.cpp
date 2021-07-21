#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
	int a[n+1];
	for(int i = 1; i <= n; i++) cin >> a[i];
	int i= n-1;
	
	while(i>0 && a[i]>a[i+1])		
	{
		i--;
	}
	if(i>0)
	{
		int h=n;
		while (a[h]<a[i] ) h--;
		swap (a[i],a[h]);
		int l=i+1,r=n;
		while (l<r)
		{
			swap(a[l],a[r]);
			l++;
			r--;
		}
	}
	else 
		for(int i = 1; i <= n; i++) a[i] = i;
		
	for(int i = 1; i <= n; i++) cout << a[i] << ' ' ;
	cout << '\n';
}

int main()
{
	
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		solve(n);
	}
    return 0;
}

