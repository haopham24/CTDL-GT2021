#include<bits/stdc++.h>
using namespace std;

main()
{
    int t; cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<int>st;
        for(int i = s.length(); i >= 0; i--)
        {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                int tmp;
                if(s[i] == '+') tmp = a + b;
                else if(s[i] == '-') tmp = a - b;
                else if(s[i] == '*') tmp = a * b;
                else if(s[i] == '/') tmp = a/b;
                st.push(tmp);
            }
            else 
            {
                int x = (int)(s[i] - '0');
                st.push(x);
            }
        }
        cout << st.top() << '\n';
    }
    return 0;
}