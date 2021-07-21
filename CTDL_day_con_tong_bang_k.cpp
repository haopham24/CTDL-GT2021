/*  QUAY LUI SINH NHI PHAN
#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100];
vector<vector<int> > ans;

void Try(int i){
	for(int j = 0; j <= 1; j++)
	{
		a[i] = j;
		if(i < n) Try(i+1);
		else if(i == n)
		{
			int sum = 0;
			for(int x = 1; x <= n; x++){
				if(a[x]) sum += b[x];
			}
			if(sum == k){
				vector<int> c;
				for(int y = 1; y <= n; y++){
					if(a[y]) c.push_back(b[y]);
				}
				ans.push_back(c);
			}
		}	
	}	
}

int main(){
	int t; cin >> t;
	while(t--){
		ans.clear();
		cin >> n >> k;
		for(int i = 1; i <= n; i++) cin >> b[i];
		sort(b+1, b+n+1);
		Try(1);
		if(ans.size()){
			sort(ans.begin(), ans.end());
			for(int i = 0; i < ans.size(); i++){
				cout << '[' << ans[i][0];
				for(int j = 1; j < ans[i].size(); j++) cout << ' ' << ans[i][j];
				cout << "] ";
			}
		}
		else cout << -1;
		cout << '\n';
	}
    return 0;
}
*/

//     QUAY LUI

#include<bits/stdc++.h>
using namespace std;

int a[20], n, k, ans[20];

void Try(int index, int s){
	cout << "\nindex = " << index << '\n';
	for(int i = 1; i <= n; i++){
		if(a[i] <= ans[index-1]) continue;
		ans[index] = a[i];
		s += a[i];

		cout << "i = " << i << " a[i] = " << a[i] << " s = " << s << " ans = ";
		for(int i = 1; i <= index; i++) cout << ans[i] << ' ';
		cout << endl;

		if(s == k){
			cout << "\tres: ";
			for(int i = 1; i <= index; i++) cout << ans[i] << ' ';
			cout << "---------------------\n";
		}
		else if(s < k && index < n){
			Try(index+1, s);
			cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		}

		s -= a[i];
	}
}

main(){
	int t = 1;
	// cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a+1, a+n+1);
		Try(1, 0);
	}
	return 0;
}

