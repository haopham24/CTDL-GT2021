/*
Cho 2 số nguyên N và K. Bạn hãy đếm số lượng các số có N chữ số mà tổng các chữ số của nó bằng K. Lưu ý, chữ số 0 ở đầu không được chấp nhận.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 50).
Mỗi test gồm 2 số nguyên N và K (1 ≤ N ≤ 100, 0 ≤ K ≤ 50000).
Output: 

Với mỗi test, in ra đáp số tìm được theo modulo 109+7 trên một dòng.
 
 */
#include <bits/stdc++.h>
using namespace std;

main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long d[n + 5][k + 5], m = 1e9 + 7;
        memset(d, 0, sizeof(d));
        for (int i = 1; i <= 9; i++)
            d[1][i] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int s = 0; s <= 9; s++)
            {
                for (int j = s; j <= k; j++)
                    d[i][j] = (d[i][j] % m + d[i - 1][j - s] % m) % m;
            }
        }
        cout << d[n][k] << '\n';
    }
    return 0;
}