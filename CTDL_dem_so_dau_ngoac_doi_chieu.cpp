#include<bits/stdc++.h>
using namespace std;

main()
{
    int t; cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(') st.push(s[i]);
            else
            {
                if(!st.empty() && st.top() == '(') st.pop();
                else st.push(s[i]);
            }
        }
        int mo = 0, dong = 0;
        while(!st.empty())
        {
            if(st.top() == '(') mo++;
            else dong++;
            st.pop();
        }
        int ans = mo/2 + dong/2 + mo%2+ dong%2;
        cout << ans << '\n';

    }

    return 0;
}