#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        while (1)
        {
            if (b % a == 0)
            {
                cout << "1/" << b / a << '\n';
                break;
            }
            else
            {
                int c = b / a + 1;
                cout << "1/" << c << " + ";
                a = a * c - b;
                b *= c;
            }
        }
    }
}
