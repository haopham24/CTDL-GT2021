#include <bits/stdc++.h>
using namespace std;

int solve(int n, long long k)
{
    long long pos = pow(2, n - 1);
    while (1)
    {
        if (k == 1)
            return 1;
        if (k == pos)
            return n;
        if (k > pos)
        {
            k = pos - (k - pos);
        }
        n--;
        pos /= 2;
    }
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        cout << solve(n, k) << endl;
    }
}