#include <bits/stdc++.h>
using namespace std;

int a[20], n, k;

void init()
{
	for(int i = 1; i <= k; i++) a[i] = i;
}

void show()
{
	for(int i = 1; i <= k; i++) cout << (char)(a[i]+64);
	cout << '\n';
}

void sinh()
{
	bool stop = false;
	while(stop == false)
	{
		show();
		int i = k;
		while(i > 0 && a[i] == n-k+i) i--;
		if(i <= 0) stop = true;
		else{
			a[i]++;
			for(int j = i+1; j <= k; j++) a[j] = a[j-1] + 1;
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
		cin >> n >> k;
		init();
		sinh();
	}
    return 0;
}

