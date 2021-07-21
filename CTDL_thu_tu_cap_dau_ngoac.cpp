#include <bits/stdc++.h>
using namespace std;

main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        stack<int> st;
        vector<int> ans;
        int res = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                st.push(res);
                ans.push_back(res);
                res++;
            }
            if(s[i] == ')')
            {
                int x = st.top(); st.pop();
                ans.push_back(x);
            }
        }
        for(int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
        cout << '\n';
    }
}