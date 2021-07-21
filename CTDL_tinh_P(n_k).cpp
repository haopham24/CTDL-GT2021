#include <bits/stdc++.h>
using namespace std;

long long m = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long res = 1;

        if (k > n) cout << "0\n";
        else
        {
            int x = n - k;
            while (n != x)
            {
                res = (res % m * n % m) % m;
                n--;
            }
            cout << res << '\n';
        }
    }
    return 0;
}