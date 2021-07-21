#include<bits/stdc++.h>
using namespace std;

int n, k, a[15], b[15][15];
bool visit[15];
vector<int> ans;

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!visit[j])
        {
            a[i] = j;
            visit[j] = true;
            if(i == n)
            {
                int sum = 0;
                for(int x = 1; x <= n; x++)
                {
                    sum += b[x][a[x]];
                }
                if(sum == k)
                {
                    for(int x = 1; x <= n; x++) ans.push_back(a[x]);
                }
            }
            else Try(i+1);
            visit[j] = false;
        }
    }
}

main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) cin >> b[i][j];
    }
    Try(1);
    cout << ans.size()/n << '\n';
    for(int i = 0; i < ans.size(); i += n)
    {
        for(int j = i; j < i+n; j++) cout << ans[j] << ' ';
        cout << '\n';
    }
    return 0;
}
