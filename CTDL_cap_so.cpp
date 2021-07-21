/*
Cho N cặp số, trong đó số thứ nhất bao giờ cũng nhỏ hơn số thứ 2. Ta nói, cặp số <c, d> được gọi là theo sau cặp số <a,b> nếu b<c. Nhiệm vụ của bạn là tìm số lớn nhất chuỗi các cặp thỏa mãn ràng buộc trên. Ví dụ với các cặp {<5, 24>, <39, 60>, <15, 28>, <27, 40>, <50, 90>} ta có kết quả là 3 tương ứng với chuỗi các cặp {<5,24>, <27, 40>, <50, 90>}.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là số cặp <a, b>; dòng tiếp theo đưa vào 2*N số là N cặp số <a, b>; các số được viết cách nhau một vài khoảng trống.
T, N, a, b thỏa mãn ràng buộc: 1≤T≤100;  1≤N, a, b ≤100.
Output:

Đưa ra kết quả mỗi test theo từng dòng.

*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct sx
{
    int first, second;
};
bool ss(struct sx a, struct sx b)
{
    return a.first < b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b[n];
        struct sx p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i].first;
            cin >> p[i].second;
            b[i] = 1;
        }
        sort(p, p + n, ss);
        int result = 1;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (p[i].first > p[j].second)
                {
                    b[i] = max(b[i], b[j] + 1);
                }
            }
        }
        cout << b[n - 1] << endl;
    }

    return 0;
}