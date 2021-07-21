#include<bits/stdc++.h>
using namespace std;

main()
{
	
	int t; cin >> t;
	while(t--)
	{
		int a[20], n;
		string s;
		cin >> s;
		n = s.length();
		
		for(int i = 1; i <= n; i++) a[i] = i;
		bool stop = false;
		while(stop == false)
		{
			int i = n - 1;
			for(int i = 1; i <= n; i++)
			{
				printf("%c",s[a[i] - 1]);
			}
			cout << ' ';
			while(i > 0 && a[i] > a[i + 1]) i--;
			if(i < 1) stop = true;
			else 
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
			
		}
		cout << '\n';
	}
	
	return 0;
}
