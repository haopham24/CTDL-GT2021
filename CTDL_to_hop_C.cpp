#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[k];
        for (int i = 0; i < k; i++)
            cin >> a[i];
        int i = k - 2;
        while (i >= 0 && a[i + 1] == a[i] + 1) i--;
        if (i >= 0)
        {
            a[i + 1]--;
            for (int j = i + 2; j < k; j++) a[j] = n - k + j + 1;     
        }
        else
        {
            if (a[0] == 1) a[0] = n - k + 1;
            else a[0]--;
            for (int j = 1; j < k; j++) a[j] = n - k + j + 1;
        }

        for (int i = 0; i < k; i++)
            cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}