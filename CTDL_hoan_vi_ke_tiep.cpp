#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n+1];
		for(int j = 1; j <= n; j++) cin >>a[j];
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
//				int x = a[l];
//				a[l] = a[r];
//				a[r] = x;
				swap(a[l],a[r]);
				l++;
				r--;
			}
		}
		else 
			for(int j = 1; j <= n; j++) a[j] = j;
		for(int j = 1; j <= n; j++) cout << a[i] << ' ';
	}
    return 0;
}

