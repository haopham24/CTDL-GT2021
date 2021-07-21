#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > G(1100);
bool ktra[1100]={};


void bfs(int i)
{
	queue <int> qu;
	cout<<i<<' ';
	qu.push(i);
	ktra [i]=1;
	
	while(!qu.empty())
	{
		int u=qu.front();
		qu.pop();
		for(int i=0;i<G[u].size();i++)
		{
			int v=G[u][i];
			if(ktra[v]==0)
			{
				cout<<v<<' ';
				ktra[v]=1;
				qu.push(v);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--)
	{
		int V,E,u;
		cin>>V>>E>>u;
		G.resize(0);
		G.resize(V+1);
		for(int i = 1; i <= V; i++) ktra[i]=0;
		for(int i=0;i<E;i++)
		{
			int u,v;
			cin>>u>>v;
			G[u].push_back(v);
			G[v].push_back(u);
		}
		bfs(u);
		cout << '\n';
	}
	
	
    return 0;
}
