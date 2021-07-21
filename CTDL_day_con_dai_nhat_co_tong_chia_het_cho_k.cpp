/*
Cho một dãy gồm n ( n ≤ 1000) số nguyên dương A1, A2, ..., An và số nguyên dương k (k ≤ 50). Hãy tìm dãy con gồm nhiều phần tử nhất của dãy đã cho sao cho tổng các phần tử của dãy con này chia hết cho k. 

Input: Dòng đầu ghi số bộ test T (T<10). Mỗi bộ test gồm 2 dòng. Dòng đầu tiên chứa hai số n, k.  Dòng tiếp theo ghi n số của dãy A. Các số đều không vượt quá 100.   

Output: Gồm 1 dòng duy nhất ghi số lượng phần tử của dãy con dài nhất thoả mãn. Dữ liệu vào luôn đảm bảo sẽ có ít nhất một dãy con có tổng chia hết cho k

Ví dụ:
Input:
1
10 3
2 3 5 7 9 6 12 7 11 15

Output:
9

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
        int a, kq[n + 5][k];
        kq[0][0] = 0;
        for (int i = 1; i < k; i++)
            kq[0][i] = -10000;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            a %= k;
            for (int j = 0; j < k; j++)
                kq[i][j] = max(kq[i - 1][j], kq[i - 1][(j + k - a) % k] + 1);
        }
        cout << kq[n][0] << '\n';
    }
    return 0;
}
