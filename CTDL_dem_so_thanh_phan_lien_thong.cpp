#include <bits/stdc++.h>
using namespace std;

bool ktra[1100];
vector<vector<int> > G(1100);

void dfs(int u)
{
	ktra[u]=1;
	for(int i=0;i<G[u].size();i++)
	{
		int v=G[u][i];
		if(ktra[v]==0) 
		{
			dfs(v);
		}
	}
	
}

int main()
{
	
	int t; cin >> t;

	while(t--)
	{
		int V,E;
		cin>>V>>E;
		G.resize(0);
		G.resize(V+1);
		
		for(int i = 1; i <= V; i++) ktra [i] = 0;
		for(int i=0;i<E;i++)
		{
			int u,v;
			cin>>u>>v;
			G[u].push_back(v);
			G[v].push_back(u);
		}
		int dem=0;
		for(int i=1;i<=V;i++)
		{
			if(ktra[i]==0){
				dfs(i);
				dem++;
			} 
		}
		cout<<dem<<'\n';
		
	}
    return 0;
}

