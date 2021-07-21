/*
Một máy ATM hiện có n (n ≤ 30) tờ tiền có giá trị t[1], t[2], …, t[n]. Hãy tìm cách trả ít tờ nhất với số tiền đúng bằng S (các tờ tiền có giá trị bất kỳ và có thể bằng nhau, mỗi tờ tiền chỉ được dùng một lần).

Input: Dòng đầu tiên ghi số bộ test T (T<10). Mỗi bộ test gồm 2 số nguyên n và S (S ≤ 109). Dòng thứ hai chứa n số nguyên t[1], t[2], …, t[n] (t[i] ≤ 109)

Output: Với mỗi bộ test ghi ra số tờ tiền ít nhất phải trả.

     Nếu không thể tìm được kết quả, in ra -1.

Ví dụ

Input
1

3 5

1 4 5

Output
1

*/
#include <bits/stdc++.h>
using namespace std;
int n, s, a[10000], dem;
bool ck[1000], ok;

void Try(int i)
{
    for (int j = n - 1; j >= 0; j--)
    {
        if (a[j] <= s && ck[j] == 0)
        {
            s = s - a[j];
            ck[j] = 1;
            if (s == 0)
            {
                if (dem > i)
                    dem = i + 1;
                ok = 1;
            }
            else
                Try(i + 1);
            s = s + a[j];
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ck[i] = 0;
        }
        ok = 0;
        sort(a, a + n);
        dem = 1000000;
        Try(0);
        if (ok == 1)
            cout << dem << endl;
        else
            cout << -1 << endl;
    }
}