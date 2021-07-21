#include <bits/stdc++.h>
using namespace std;

int a[100], b[100], n, k;
bool stop = false;

void init()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
}

void sinh()
{
    int dem = k;
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i >= 1)
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
    }
    else
    {
        for (int i = 1; i <= k; i++)
            a[i] = -1;
    }
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (a[i] == b[j])
                dem--;
        }
    }
    cout << dem << "\n";
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        sinh();
    }
    return 0;
}
