#include <bits/stdc++.h>
using namespace std;

int Search(int A[], int u, int sopt)
{
    for (int i = 0; i <= sopt; i++)
    {
        if (A[i] == u)
            return i;
    }
    return -1;
}

bool nodela(int A[], int i, int sopt)
{
    if (2 * i + 1 <= sopt && A[2 * i + 1] > 0)
        return false;
    if (2 * i + 2 <= sopt && A[2 * i + 2] > 0)
        return false;
    return true;
}

int muc(int i)
{
    int muc = 0;
    while (i)
    {
        i = (i - 1) / 2;
        muc++;
    }
    return muc;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A[100005] = {};

        int sopt;
        int u, v, n;
        char x;
        cin >> n;
        cin >> u >> v >> x;
        A[0] = u;
        if (x == 'L')
        {
            A[1] = v;
            sopt = 1;
        }
        else
        {
            A[2] = v;
            sopt = 2;
        }
        for (int i = 1; i < n; i++)
        {
            cin >> u >> v >> x;
            int p = Search(A, u, sopt);
            if (x == 'L')
            {
                A[2 * p + 1] = v;
                sopt = max(sopt, 2 * p + 1);
            }
            else if (x == 'R')
            {
                A[2 * p + 2] = v;
                sopt = max(sopt, 2 * p + 2);
            }
        }
        vector<int> res;
        for(int i = 1; i <= sopt; i++)
        {
            if(nodela(A,i,sopt))
            {
                res.push_back(muc(i));
            }
        }
        bool ans = 1;
        cout << endl;
        for(int i = 1; i < res.size(); i++)
        {
            if(res[i] != res[i-1]) ans = 0;

        }
        // cout << endl;
        cout << ans << '\n';
    }
}
