//-------------SINH--------------------
#include<bits/stdc++.h>
using namespace std;

int n, k, a[20], ok;

void init(){
    cin >> n;
    k = 1; a[k] = n;
    ok = 1;
}

void ghi(){
    if(k == 1) cout << '(' << a[k] << ") ";
    else 
        for(int i = 1; i <= k; i++){
            if(i == 1) cout << '(' << a[i] << ' ';
            else if(i == k) cout << a[i] << ") ";
            else cout << a[i] << ' ';
        }
}

void solve(){
    int i = k, j, r, s, d;
    while(i > 0 && a[i] == 1) i--;
    if(i > 0){
        a[i] = a[i] - 1;
        d = k - i + 1;
        r = d / a[i];
        s = d % a[i];
        k = i;
        if(r > 0){
            for(int j = i+1; j <= i+r; j++) a[j] = a[i];
            k += r;
        }
        if(s > 0){
            k++;
            a[k] = s;
        }
    }
    else ok = 0;
}

main(){
    int t; cin >> t;
    while(t--){
        init();
        while(ok){
            ghi();
            solve();
        }
        cout << '\n';
    }
    return 0;
}

/*-------------QUAY LUI---------------
#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[15];
vector<vector<int>> res;

void abc(int i, int s, vector<int> v)
{
	if (s == n)
	{
		res.push_back(v);
		return;
	}
	if (s > n)
		return;
	for (int j = i; j < n; j++)
	{
		if (s + a[j] <= n)
		{
			v.push_back(a[j]);
			abc(j, s + a[j], v);
			v.pop_back();
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
			a[i] = n - i;

		vector<int> v;
		res.clear();
		abc(0, 0, v);

		for (int i = 0; i < res.size(); i++)
		{
			cout << "(";
			for (int j = 0; j < res[i].size() - 1; j++)
			{
				cout << res[i][j] << " ";
			}
			cout << res[i][res[i].size() - 1] << ") ";
		}
		cout << endl;
	}
}

*/