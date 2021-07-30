/*
Cho hai số nguyên dương S và T (S, T<10000) và hai thao tác (a), (b) dưới đây:
Thao tác (a): Trừ S đi 1  (S = S-1) ;
Thao tác (b): Nhân S với 2 ( S = S*2);
Hãy dịch chuyển S thành T sao cho số lần thực hiện các thao tác (a), (b) là ít nhất. Ví dụ với    S =2, T=5 thì số các bước ít nhất để dịch chuyển S thành T thông qua 4 thao tác sau:
Thao tác (a): 2*2 = 4;
Thao tác (b): 4-1 = 3;
Thao tác (a): 3*2 = 6;
Thao tác (b): 6-1 = 5;

Input:
Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test;
T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một bộ đôi S và T.

Output: Đưa ra kết quả mỗi test theo từng dòng.

Ví dụ:
Input
3
2 5
3 7
7 4

Output
4
4
3
*/
#include <bits/stdc++.h>
using namespace std;
struct aaa
{
    int val, cnt;
};
int pfm(int s, int t)
{
    set<int> m;
    queue<aaa> q;
    q.push({s, 0});
    while (!q.empty())
    {
        aaa x = q.front();
        q.pop();
        if (x.val == t)
            return x.cnt;
        if (x.val * 2 == t || x.val - 1 == t)
            return x.cnt + 1;
        if (m.find(x.val * 2) == m.end() && x.val < t)
        {
            q.push({x.val * 2, x.cnt + 1});
            m.insert(x.val * 2);
        }
        if (m.find(x.val - 1) == m.end() && x.val > 1)
        {
            q.push({x.val - 1, x.cnt + 1});
            m.insert(x.val - 1);
        }
    }
}
main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int s, t;
        cin >> s >> t;
        cout << pfm(s, t) << '\n';
    }
    return 0;
}
