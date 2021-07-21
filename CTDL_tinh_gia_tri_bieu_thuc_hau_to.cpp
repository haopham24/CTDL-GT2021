#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '%' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int tmp;
                if (s[i] == '+')
                    tmp = a + b;
                else if (s[i] == '-')
                    tmp = b - a;
                else if (s[i] == '*')
                    tmp = b * a;
                else if (s[i] == '/')
                    tmp = b / a;
                else if (s[i] == '%')
                    tmp = b % a;
                st.push(tmp);
            }
            else
            {
                int a = (int)(s[i]-'0');
                st.push(a);
            }
        }
        cout << st.top() << '\n';
    }
}