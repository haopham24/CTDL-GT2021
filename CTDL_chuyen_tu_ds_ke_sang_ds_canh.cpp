#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	cin.ignore();
	int a[n+5][n+5]={};
	for(int i = 1; i <= n; i++)
	{
		string s;
		getline(cin, s);
		s += " ";
		int so = 0;
		for(int j = 0; j < s.length(); j++)
		{
			if(s[j] >= '0' && s[j] <= '9')
			{
				so = so*10 + (int)(s[j] - '0');
			}
			else if(so > 0)
			{
				a[i][so] = 1;
				so = 0;
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = i+1; j <= n; j++)
		{
			if(a[i][j] ) cout << i << ' ' << j <<endl;
//			cout << a[i][j] << ' ';
		}
//		cout << endl;
	}
	
    return 0;
}

