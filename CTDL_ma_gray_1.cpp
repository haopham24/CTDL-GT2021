#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--) 
	{
		int n;
		cin >> n;
		int k = 1;
		for(int i = 0; i < n; i++) k *= 2;
		string s[k+2];
		s[1] = "0";
		s[2] = "1";
		if(n > 1)
		{
			int t;
			for(int i = 2; i <= n; i++)
			{
				t = 1;
				for(int j = 1; j <= i-1; j++) t *= 2;
				int l = 1;
				for(int j = 1; j <= i; j++) l *= 2;
				for(int j = 1; j <= t; j++)
				{
					s[l-j+1] = "1" + s[j];
					s[j] = "0" + s[j];
				}
			}
		}
		
		for(int i = 1; i <= k; i++) cout << s[i] << ' ';
	
		cout << '\n';
	}
	
    return 0;
}


