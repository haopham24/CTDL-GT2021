/*
Cho 5 số nguyên dương A, B, C, D, E. Bạn có thể hoán vị các phần tử cho nhau, hãy đặt các dấu biểu thức +, -, * sao cho biểu thức sau đúng:

[[[A o(1) B] o(2) C] o(3) D] o(4) E = 23

Trong đó: o(1) … o(4) là các phép toán +, -, *.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm 5 số nguyên dương A, B, C, D, E có giá trị không vượt quá 100.

Output: Với mỗi test, in ra đáp án tìm được, mỗi xâu in ra trên một dòng.

Ví dụ:

Input
3
1 1 1 1 1
1 2 3 4 5
2 3 5 7 11

Output
NO
YES
YES

*/
#include <bits/stdc++.h>
using namespace std;
bool ok, p[10];
int a[5], vt[10];
vector<vector<int>> kq;
vector<int> u;
void init()
{
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    for (int i = 0; i < 10; i++)
    {
        vt[i] = 0;
        p[i] = false;
    }
    ok = false;
    u.clear();
}

void dau()
{
    for (int i = 1; i <= 3; i++)
    {
        u.push_back(i);
        if (u.size() == 4)
            kq.push_back(u);
        else
            dau();
        u.pop_back();
    }
}
bool ck()
{
    for (int i = 0; i < kq.size(); i++)
    {
        int s = a[vt[0]];
        for (int j = 0; j < 4; j++)
        {
            if (kq[i][j] == 1)
                s += a[vt[j + 1]];
            if (kq[i][j] == 2)
                s -= a[vt[j + 1]];
            if (kq[i][j] == 3)
                s *= a[vt[j + 1]];
        }
        if (s == 23)
            return true;
    }
    return false;
}
void ql(int i)
{
    if (ok)
        return;
    for (int j = 0; j < 5; j++)
    {
        if (!p[j])
        {
            vt[i] = j;
            p[j] = true;
            if (i == 4)
            {
                if (ck())
                {
                    ok = true;
                    return;
                }
            }
            else
                ql(i + 1);
            p[j] = false;
        }
    }
}

main()
{
    dau();
    int t;
    cin >> t;
    while (t--)
    {
        init();
        ql(0);
        if (ok)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }
    return 0;
}