/*
Cho bảng A[] kích thước N x M (N hàng, M cột). Bạn được phép đi xuống dưới, đi sang phải và đi xuống ô chéo dưới. Khi đi qua ô (i, j), điểm nhận được bằng A[i][j].

Hãy tìm đường đi từ ô (1, 1) tới ô (N, M) sao cho tổng điểm là nhỏ nhất.

Input:
    Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
    Mỗi test gồm số nguyên dương N và M.
    N dòng tiếp theo, mỗi dòng gồm M số nguyên A[i][j] (0 ≤ A[i] ≤ 1000).
Output: 
    Với mỗi test, in ra độ dài dãy con tăng dài nhất trên một dòng.
Ví dụ:
Input:
    1
    3 3
    1 2 3
    4 8 2
    1 5 3
Output: 8
*/

#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 5][m + 5], f[n + 5][m + 5];
        memset(f, 0, sizeof(f));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (i == 1 && j == 1)
                    f[i][j] = a[i][j];
                else if (i == 1)
                    f[i][j] = a[i][j] + f[i][j - 1];
                else if (j == 1)
                    f[i][j] = a[i][j] + f[i - 1][j];
                else
                    f[i][j] = a[i][j] + min(f[i - 1][j - 1], min(f[i - 1][j], f[i][j - 1]));
            }
        }
        cout << f[n][m] << '\n';
    }
    return 0;
}