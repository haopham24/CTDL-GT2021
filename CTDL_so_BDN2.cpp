#include<bits/stdc++.h>
using namespace std;

string solve(int n)
{
    queue<string> q;
    q.push("1");
    while(!q.empty())
    {
        string ans = q.front(); q.pop();
        long long a = 0;
        for(int i = 0; i < ans.size(); i++)
        {
            a = a * 10 + (int)(ans[i] - '0');
        }
        if(a % n == 0) return ans;
        q.push(ans + "0");
        q.push(ans + "1");
    }
}

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << solve(n);
        cout << '\n';
    }
}