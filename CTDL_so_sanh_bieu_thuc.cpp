#include<bits/stdc++.h>
using namespace std;

string abc(string& s)
{
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
    string ans = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != '(' && s[i] != ')') ans += s[i];
    }
    return ans;
}

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if(abc(s1) == abc(s2)) cout << "YES";
        else cout << "NO";        
        cout << '\n';
    }
}