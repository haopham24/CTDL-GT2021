#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int n;
	cin >> n;
	int a[n];
	vector<int> b;
	int dd[100000] = {};
	for(int i = 0; i < n; i++) 
	{
		cin >> a[i];
		if(dd[a[i]] == 0) b.push_back(a[i]);
		dd[a[i]] ++;
	}
	for(int i = 0; i < b.size(); i++) cout << b[i] <<' ';
	
    return 0;
}

