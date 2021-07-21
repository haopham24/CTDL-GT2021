/*
Cho hai đa thức P và Q được biểu diễn như một mảng bao gồm các hệ số của đa thức. Ví dụ với P(x) = 5 + 0x1 +10x2 + 6x3 được biểu diễn như mảng P[] ={5, 0, 10, 6}. Hãy đưa ra đa thức R = P×Q theo các hệ số của R với cách biểu diễn như trên.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng thứ nhất đưa vào hai số M, N tương ứng với lũy thừa lớn nhất của đa thức P và Q; dòng tiếp theo đưa vào M số là hệ số của đa thức P; dòng cuối cùng đưa vào M số là hệ số của đa thức Q.
T, M, N, P[i], Q[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤M, N≤100; 1≤P[i], Q[i]≤100.
Output:

Đưa ra kết quả mỗi test theo từng dòng.

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
        int a[n], b[m], kq[m + n];
        for (int i = 0; i < m + n; i++)
            kq[i] = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < m; j++)
            cin >> b[j];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                kq[i + j] += a[i] * b[j];
            }
        }
        for (int i = 0; i < m + n - 1; i++)
            cout << kq[i] << ' ';
        cout << '\n';
    }
    return 0;
}