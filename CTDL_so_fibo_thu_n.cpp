/*
Dãy số Fibonacci được xác định bằng công thức như sau:

F[0] = 0, F[1] = 1;

F[n] = F[n-1] + F[n-2] với mọi n >= 2.

Các phần tử đầu tiên của dãy số là 0, 1, 1, 2, 3, 5, 8, ...

Nhiệm vụ của bạn là hãy xác định số Fibonaci thứ n. Do đáp số có thể rất lớn, in ra kết quả theo modulo 109+7.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 1000).

Mỗi test bắt gồm một số nguyên N (1 ≤ N ≤ 109).

Output: 

Với mỗi test, in ra đáp án trên một dòng.

*/

#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long n, F[2][2], M[2][2];
void mul(long long f[2][2], long long m[2][2])
{
    long long a, b, c, d;
    a = (f[0][0] * m[0][0] % mod + f[0][1] * m[1][0] % mod) % mod;
    b = (f[0][0] * m[0][1] % mod + f[0][1] * m[1][1] % mod) % mod;
    c = (f[1][0] * m[0][0] % mod + f[1][1] * m[1][0] % mod) % mod;
    d = (f[1][0] * m[0][1] % mod + f[1][1] * m[1][1] % mod) % mod;
    F[0][0] = a;
    F[0][1] = b;
    F[1][0] = c;
    F[1][1] = d;
}
void Pow(long long f[2][2], long long n)
{
    if (n <= 1)
        return;
    Pow(f, n / 2);
    mul(f, f);
    if (n % 2)
        mul(f, M);
}
void sol()
{
    F[0][0] = 1;
    F[0][1] = 1;
    F[1][0] = 1;
    F[1][1] = 0;
    M[0][0] = 1;
    M[0][1] = 1;
    M[1][0] = 1;
    M[1][1] = 0;
    if (n == 0)
        cout << 0;
    else
    {
        Pow(F, n - 1);
        cout << F[0][0];
    }
    cout << '\n';
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sol();
    }
    return 0;
}