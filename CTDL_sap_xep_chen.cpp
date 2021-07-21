#include<bits/stdc++.h>
using namespace std;

main()
{
	int n;
	cin >> n;
	int a[n];
	vector<int> b;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++)
	{
		b.push_back(a[i]);
		sort(b.begin(), b.end());
		cout << "\nBuoc " << i << ": ";
		for(int j = 0; j < b.size(); j++) cout << b[j] << ' ';
	}
	
	return 0;
}
