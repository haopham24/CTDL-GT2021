#include <bits/stdc++.h>
using namespace std;

int Search(int A[], int u,int soptA)
{
    for (int i = 0; i <= soptA; i++)
    {
        if (A[i] == u)
            return i;
    }
    return -1;
}

int cmp(int A[], int B[], int soptA, int soptB)
{
    if(soptA != soptB) return 0;
    for(int i = 0; i <= soptA; i++)
    {
        if(A[i] != B[i]) return 0;
    }
    return 1;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A[100005], B[100005];
        A[0] = 1;
        B[0] = 1;
        int soptA = 1, soptB = 1;
        int u, v, n;
        char x;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> u >> v >> x;
            int p = Search(A, u, soptA);
            if (x == 'L')
            {
                A[2 * p + 1] = v;
                soptA = max(soptA, 2 * p + 1);
            }
            else if (x == 'R')
            {
                A[2 * p + 2] = v;
                soptA = max(soptA, 2 * p + 2);
            }
        }
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> u >> v >> x;
            int p = Search(B, u, soptB);
            if (x == 'L')
            {
                B[2 * p + 1] = v;
                soptB = max(soptB, 2 * p + 1);
            }
            else if (x == 'R')
            {
                B[2 * p + 2] = v;
                soptB = max(soptB, 2 * p + 2);
            }
        }
        cout << cmp(A, B, soptA, soptB) << '\n';
            
    }
}
