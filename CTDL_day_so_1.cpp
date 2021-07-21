/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void ghi(vector<int>a){
	cout << "[" ;
	for(int i = 0; i < a.size() - 1; i++) cout << a[i] << ' ';
	cout << a[a.size() - 1] << "]\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		while(n--)
		{
			ghi(a);
			for(int j = 0; j < n ; j++)
			{
				a[j] = a[j] + a[j + 1];
			}
			a.pop_back();
			
		}
		
	}
    return 0;
}
*/

//    QUAY LUI

#include<bits/stdc++.h>
using namespace std;

int a[20], n;

void Try(int k){
	cout << "[";
	for(int i = 0; i < k; i++)
	{
		if(i != k-1 )cout << a[i] << ' ';
		else cout << a[i];
	}
	cout << "]\n";

	if(k == 1) return;

	for(int i = 0; i < k-1; i++) a[i] = a[i] + a[i+1];

	Try(k-1);
}

main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		Try(n);
	}
}

