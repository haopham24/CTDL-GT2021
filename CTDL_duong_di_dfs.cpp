#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > a;
vector<bool> chuaxet(1100);
vector<int> truoc(1100);

void dfs(int u){
    chuaxet[u] = false;
    for(int i = 0; i < a[u].size(); i++){
        if (chuaxet[a[u][i]])
        {
        	truoc[a[u][i]] = u;
        	dfs(a[u][i] );
		}
    }
}

void process(){
	
    int v, e, s, t;
    cin >> v >> e >> s >> t;
    for(int i = 1; i <= v; i++) chuaxet[i] = true;
	a.resize(0);
	a.resize(v+1);
    for(int i = 0; i < e; i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(s);
    vector<int> res;
	res.push_back(t);
	int u = truoc[t];
    while(u != s)
    {
    	res.push_back(u);
        u = truoc[u];
    }
    res.push_back(s);
    for(int i = res.size()-1; i >= 0; i--) cout << res[i] << ' ';
	cout << '\n';
    cout << endl;
}

int main(){

    int T;
    cin >> T;
    while(T--) process();

    return 0;
}
