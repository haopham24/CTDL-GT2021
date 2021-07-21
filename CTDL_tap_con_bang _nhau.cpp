//-----SINH NHI PHAN => TLE-----------
/*
#include <bits/stdc++.h>
using namespace std;

int n, a[105], b[105],sum;

bool ans()
{
	int s1 = 0;
	for(int i = 1; i <= n; i++)
	{
		if(a[i] == 0) s1 += b[i];
		if(s1 > sum /2) return 0;
		if(s1 == sum /2) return 1;
	}
	return 0;
}

void sinh()
{
	bool stop = false;
	while(!stop)
	{
		if(ans())
		{
			cout << "YES\n";
			return ;
		}
		
		int i = n; 
		while(a[i] == 1)
		{
			a[i] = 0;
			i--;
		}
		if(i > 0)
		{
			a[i] = 1;
		}
		else stop = true;
	}
	cout << "NO\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		sum = 0;
		cin >> n;
		for(int i = 1; i <= n; i++) a[i] = 0;
		for(int i = 1; i <= n; i++) 
		{
			cin >> b[i];
			sum += b[i];
		}
		if(sum % 2 == 1) cout << "NO\n";
		else sinh();
	}
    return 0;
}
*/

//---------QUAY LUI----------------
#include<bits/stdc++.h>
using namespace std;

void Try(){

}

main(){

	return 0;
}

