#include <bits/stdc++.h>
using namespace std;

int n, a[100]; 

void init()
{
	for(int i = 1; i <= n; i++) a[i] = 0;
}

void res()
{
	for(int i = 1; i <= n; i++) cout << a[i] << ' ';
	cout << '\n';
}

bool check()
{
	for(int i = 1; i <= n/2; i++)
	{
		if(a[i] != a[n-i+1]) return false;
	}
	return true;
}

void sinh()
{
	bool stop = false;
	while(!stop)
	{
		if(check() == true) res();
		int i = n;
		while(a[i] == 1) i--;
		if(i <= 0) stop = true;
		else{
			a[i] = 1;
			for(int j = i+1; j <= n; j++) a[j] = 1-a[j];
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	init();
	sinh();
	
    return 0;
}

