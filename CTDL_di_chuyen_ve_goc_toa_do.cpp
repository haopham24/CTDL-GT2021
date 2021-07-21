/*
Giả sử bạn đang ở điểm có tọa độ nguyên dương (n,m) và cần dịch chuyển về tọa độ (0,0). Mỗi bước dịch chuyển bạn chỉ được phép dịch chuyển đến tọa độ (n-1, m) hoặc (n, m-1); Từ ô (0,m), hoặc (n, 0) thì có thể di chuyển 1 bước để về gốc (0,0).

Hãy đếm số cách bạn có thể dịch chuyển về tọa độ (0,0).

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ n, m được viết cách nhau một vài khoảng trống.
T, n, m thỏa mãn ràng buộc: 1≤T≤100;  1≤n, m ≤25.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
*/
#include <bits/stdc++.h>
using namespace std;

main()
{
    long long f[30][30];

    for (int i = 1; i < 26; i++)
    {
        f[i][0] = 1;
        f[0][i] = 1;
    }
    f[0][0] = 0;
    for (int i = 1; i < 26; i++)
    {
        for (int j = 1; j < 26; j++)
        {

            f[i][j] = f[i][j - 1] + f[i - 1][j];
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << f[n][m] << '\n';
    }
    return 0;
}