#include <bits/stdc++.h>
using namespace std;
string a[150];
string add(string a, string b)
{
    string res = "";
    while (a.length() < b.length())
        a = '0' + a;
    while (b.length() < a.length())
        b = '0' + b;
    int c = 0;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int x = (a[i] - '0') + (b[i] - '0') + c;
        c = x / 10;
        x %= 10;
        res = (char)(x + '0') + res;
    }
    if (c)
        res = '1' + res;
    return res;
}
string mul(string s1, string s2)
{
    int l1 = s1.length();
    int l2 = s2.length();
    int l = l1 + l2;
    vector<int> a, b;
    for (int i = 0; i < l1; i++)
        a.push_back(s1[i] - '0');
    for (int i = 0; i < l2; i++)
        b.push_back(s2[i] - '0');
    vector<vector<int>> res(l2);
    int id = 0;
    for (int i = l2 - 1; i >= 0; i--)
    {
        int c = 0, s = 0;
        int t = 0;
        while (t < id)
        {
            res[id].push_back(0);
            t++;
        }
        for (int j = l1 - 1; j >= 0; j--)
        {
            s = a[j] * b[i] + c;
            res[id].push_back(s % 10);
            c = s / 10;
        }
        if (c > 0)
            res[id].push_back(c);
        while (res[id].size() < l)
            res[id].push_back(0);
        reverse(res[id].begin(), res[id].end());
        id++;
    }
    int c = 0;
    string ans = "";
    for (int j = res[0].size() - 1; j >= 0; j--)
    {
        int s = c;
        for (int i = 0; i < res.size(); i++)
            s += res[i][j];
        ans = char(s % 10 + '0') + ans;
        c = s / 10;
    }
    if (c)
        ans = '1' + ans;
    while (ans[0] == '0')
        ans.erase(ans.begin());
    return ans;
}
void sol()
{
    a[0] = "1";
    a[1] = "1";
    for (int i = 2; i <= 102; i++)
    {
        string t = "";
        for (int j = 0; j < i; j++)
        {
            string t1 = "0";
            t = add(t, mul(a[j], a[i - j - 1]));
        }
        a[i] = t;
    }
}
main()
{
    sol();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << a[n] << '\n';
    }
    return 0;
}