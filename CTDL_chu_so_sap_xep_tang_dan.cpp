/*
Xét các số X có các chữ số được sắp xếp tăng dần, tức a[1] ≤ a[2] ≤ … ≤ a[N] trong đó a[1], a[2], …, a[N] lần lượt là các chữ số của X. Chẳng hạn 223, 8999, …
Cho trước số chữ số N. Nhiệm vụ của bạn là đếm xem có bao nhiêu số như vậy.

Input:
    Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
    Mỗi test gồm một số nguyên dương N (1 ≤ N ≤ 100).

Output: 
    Với mỗi test, in ra đáp án tìm được trên một dòng theo modulo 109+7.
*/

#include <bits/stdc++.h>
using namespace std;

main()
{
    long long a[105][15], m = 1e9 + 7;
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 10; i++)
        a[1][i] = 1;
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int x = j; x < 10; x++)
            {
                a[i][j] = (a[i][j] % m + a[i - 1][x] % m) % m;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long s = 0;
        for (int i = 0; i < 10; i++)
            s = (s % m + a[n][i]) % m;
        cout << s << '\n';
    }
    return 0;
}