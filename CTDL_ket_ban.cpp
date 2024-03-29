/*
Trường học X có N sinh viên, trong đó có M cặp là bạn bè của nhau. Bạn của bạn cũng là bạn, tức là nếu A là bạn của B, B là bạn của C thì A và C cũng là bạn bè của nhau.

Các bạn hãy xác định xem số lượng sinh viên nhiều nhất trong một nhóm bạn là bao nhiêu?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test bắt đầu bởi 2 số nguyên N và M (N, M ≤ 100 000).

M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v (u #v) cho biết sinh viên u là bạn của sinh viên v.

Output: 

Với mỗi test, in ra đáp án tìm được trên một dòng.

Ví dụ:

Input:
2
3 2
1 2
2 3

10 12
1 2
3 1
3 4
5 4
3 5
4 6
5 2
2 1
7 1
1 2
9 10
8 9

Output
3
7
*/

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
