#include <bits/stdc++.h>
using namespace std;

map<long long, bool> d;
int x[20];
long long m;
vector<int> a;

void Try(int i, int n)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n - 1)
        {
            long long kq = 0;
            for (int k = 0; k < n; k++)
            {
                if (x[k]) kq = kq * 10 + a[k];
            }
            if (d[kq] && kq != 0 && m < kq) m = kq;
        }
        else Try(i + 1, n);
    }
}
main()
{
    for (long long i = 1; i <= 1e6; i++) d[i * i * i] = true;
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        a.clear();
        while (n)
        {
            a.push_back(n % 10);
            n /= 10;
        }
        reverse(a.begin(), a.end());
        m = -1;
        Try(0, a.size());
        cout << m ;
    }
    return 0;
}