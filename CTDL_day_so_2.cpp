#include <bits/stdc++.h>
using namespace std;

void ghi(vector<int>a){
	cout << "[" ;
	for(int i = 0; i < a.size() - 1; i++) cout << a[i] << " ";
	cout << a[a.size() - 1] << " ]";
}


int main()
{
	
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		int nn = n;
		vector<int> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		vector<vector<int> > ans;
		ans.push_back(a);
		while(n--)
		{
			vector<int> b;
			for(int j = 0; j < n ; j++)
			{
				a[j] = a[j] + a[j + 1];
				b.push_back(a[j]);
			}
			ans.push_back(b);
			a.pop_back();	
		}
		
		for(int i = nn-1; i >= 0; i--)
		{
			ghi(ans[i]);
			cout << endl;
		}
		cout << endl;
		
	}
    return 0;
}

