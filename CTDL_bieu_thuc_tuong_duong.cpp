#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<int> st;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(') st.push(i);
            if(s[i] == ')' && !st.empty())
            {
                int a = st.top(); st.pop();
                if(a == 0) continue;
                if(s[a-1] == '-') 
                    for(int j = a; j <= i; j++)
                    {
                        if(s[j] == '+') s[j] = '-';
                        else if(s[j] == '-') s[j] = '+';
                    }
            }
        }
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != '(' && s[i] != ')') cout << s[i];
        }
        cout << '\n';
    }
}