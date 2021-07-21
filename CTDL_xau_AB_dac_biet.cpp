#include<bits/stdc++.h>
using namespace std;

int n, k, a[100];
string s;
vector<string> ans;

void Try(int i)
{
    for(int j = 0; j < 2; j++)
    {
        a[i] = j;
        if(i == n-k)
        {
            for(int h = 1; h <= n-k; h++)
            {
                if(h==1 && a[1])
                {
                    string ss = s;
                    for(int x = 1; x <= n-k; x++)
                    {
                        if(a[x]) ss += "B";
                        else ss += "A";
                    }
                    ans.push_back(ss);
                }
                if(h == n-k && a[n-k])
                {
                    string ss = "";
                    for(int x = 1; x <= n-k; x++)
                    {
                        if(a[x]) ss += "B";
                        else ss += "A";
                    }
                    ss += s;
                    ans.push_back(ss);   
                }
                if(h > 1 && a[h] && a[h-1])
                {
                    string ss = "";
                    for(int x = 1; x <= n-k; x++)
                    {
                        if(x == h) ss += s;
                        if(a[x]) ss += "B";
                        else ss += "A";
                    }
                    ans.push_back(ss);
                }
            }
        }
        else Try(i+1);
    }
}

main()
{
    s = "";
    cin >> n >> k;
    for(int i = 0; i < k; i++) s += "A";
    Try(1);
    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << '\n';
    return 0;
}