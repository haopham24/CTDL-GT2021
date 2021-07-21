/*
Cho số nguyên dương N. Nhiệm vụ của bạn là tìm số K nhỏ nhất, sao cho K có đúng N ước. Input đảm bảo rằng đáp án không vượt quá 1018.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤  20).

Mỗi test gồm 1 số nguyên N ( 1 ≤  N ≤  1000).

Output:  Với mỗi test, in ra đáp án trên một dòng.

*/
#include <bits/stdc++.h>
using namespace std;

int n, a[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
long long k = 1e18;

void Try(long long i, long long x, long long u)
{
    if (u == n) k = min(k, x);
    if (u > n) return;
    int j = 1;
    while (1)
    {
        if (x * a[i] > k) break;
        x *= a[i];
        Try(i + 1, x, u * (j + 1));
        j++;
    }
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        k = 1e18;
        Try(0, 1, 1);
        cout << k << '\n';
    }
    return 0;
}