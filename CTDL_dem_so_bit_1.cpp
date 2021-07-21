/*
Cho số nguyên dương N. Mỗi bước, bạn sẽ biến đổi N thành [N/2], N mod 2, [N/2]. Sau khi thực hiện một cách triệt để, ta thu được một dãy số chỉ toàn số 0 và 1.

Nhiệm vụ của bạn là hãy đếm các số bằng 1 trong đoạn [L, R] của dãy số cuối cùng.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm 3 số nguyên N, L, R (1 ≤ N, L, R < 250, 0 ≤ R-L ≤ 100 000).

Output: 

Với mỗi test, in ra đáp án trên một dòng.

*/

#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long n, l, r, kq = 0;
        long long a[200], b[100], m = 0, cx[(int)1e5 + 5];
        cin >> n >> l >> r;
        long long k = n;
        while (n > 1)
        {
            a[m++] = n;
            n /= 2;
        }
        for (long long i = 0; i < (m + 1) / 2; i++)
            swap(a[i], a[m - i - 1]);

        for (long long i = l; i <= r; i++)
        {
            if (i % 2)
                kq++;
            else
            {
                int j = 1;
                while (i % (long long)pow(2, j) == 0)
                {
                    j++;
                }
                kq += a[j - 2] % 2;
            }
        }
        cout << kq << '\n';
    }
    return 0;
}