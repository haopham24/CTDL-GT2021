#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        stack<string> x;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] <= 'z' && a[i] >= 'a')
                x.push(string(1, a[i]));
            else
            {
                string s1 = x.top();
                x.pop();
                string s2 = x.top();
                x.pop();
                string c = s2 + a[i] + s1;
                x.push(c);
            }
        }
        cout << x.top() << '\n';
    }
    return 0;
}