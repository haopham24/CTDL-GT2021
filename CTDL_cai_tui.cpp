/*
Một người có cái túi thể tích V (V<1000). Anh ta có N đồ vật cần mang theo (N≤1000), mỗi đồ vật có thể tích là A[i] (A[i]≤100) và giá trị là C[i] (C[i]≤100). Hãy xác định tổng giá trị lớn nhất của các đồ vật mà người đó có thể mang theo, sao cho tổng thể tích không vượt quá V.

Input

Dòng đầu ghi số bộ test T (T<10)
Mỗi bộ test gồm ba dòng. Dòng đầu ghi 2 số N và V. Dòng tiếp theo ghi N số của mảng A. Sau đó là một dòng ghi N số của mảng C.
Dữ liệu vào luôn đảm bảo không có đồ vật nào có thể tích lớn hơn V.
Output

Với mỗi bộ test, ghi trên một dòng giá trị lớn nhất có thể đạt được.

*/

#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, v;
        cin >> n >> v;
        int a[n + 5], c[n + 5];
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> c[i];
        int b[n + 5][v + 5];
        for (int i = 0; i <= v; i++) b[0][i] = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= v; j++)
            {
                if (j - a[i] >= 0) b[i][j] = max(b[i - 1][j], c[i] + b[i - 1][j - a[i]]);
                else b[i][j] = b[i - 1][j];
            }
        }
        cout << b[n][v] << '\n';
    }
    return 0;
}