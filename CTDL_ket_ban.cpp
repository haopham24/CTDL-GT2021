#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > E;
vector<bool> visited(100010);


int dfs(int u){
	int a = 1;
    visited[u] = true;
    for(int i = 0; i < E[u].size(); i++){
        if (!visited[E[u][i]]) a += dfs(E[u][i]);
    }
    return a;
}

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--)
	{
		int n,m;
	    cin >> n >> m ;
	    for(int i = 1; i <= n; i++) visited[i] = false;
		E.resize(0);
		E.resize(n+1);
	    for(int i=0;i<m;i++){
	        int a,b;
	        cin >> a >> b;
	        E[a].push_back(b);
	        E[b].push_back(a);
	    }
	    int ans = 0;
	    for(int i = 1; i <= n ; i++)
	    {
	    	if(!visited[i])
	    	{
	    		ans = max(ans, dfs(i));
			}
		}
		cout << ans << '\n';
	}

    return 0;
}
