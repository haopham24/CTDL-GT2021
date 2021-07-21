#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		int dem0 = 0, dem1 = 0, dem2 = 0;
		int x;
		while(n--)
		{
			cin >> x;
			if(x == 0) dem0++;
			else if(x == 1) dem1++;
			else dem2++;
		}
		for(int i = 0; i < dem0; i++) cout << '0' <<' ';
		for(int i = 0; i < dem1; i++) cout << '1' <<' ';
		for(int i = 0; i < dem2; i++) cout << '2' <<' ';
		cout << '\n';
	}
    return 0;
}
