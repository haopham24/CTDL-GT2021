#include <bits/stdc++.h>
using namespace std;

int n, a[15];
bool unused[15];

void Try(int i)
{
	for(int j = n; j > 0; j--)
	{
		if(unused[j])
		{
			a[i] = j;
			unused[j] = 0;
			if(i == n)
			{
				for(int x = 1; x <= n; x++) cout << a[x];
				cout << ' ';
			}
			else Try(i+1);
			unused[j] = true;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++) unused[i] = 1;
		Try(1);
		cout << '\n';
	}
    return 0;
}

