#include<bits/stdc++.h>
using namespace std;

struct data{
	int giatri, chiso, tri;
};

bool cmp(data a, data b)
{
	if(a.tri > b.tri) return 0;
	if(a.tri == b.tri)
	{
		if(a.chiso > b.chiso) return 0;
	}
	return 1;
}

main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, x;
		cin >> n >> x;
		vector<data> a(n);
		for(int i = 0; i < n; i++)
		{
			cin >> a[i].giatri;
			a[i].chiso = i;
			a[i].tri = abs(a[i].giatri - x);
		}
		sort(a.begin(), a.end(), cmp);
		for(int i = 0; i < n; i++) cout << a[i].giatri << ' ';
		cout << endl;
	}
}
