/*
Cho dãy gồm N số phân biệt AN = {a1, a2, .., aN } và số tự nhiên K (K<=N<=100). Ta gọi một dãy con tăng dần bậc K của dãy số AN là một dãy các số gồm K phần tử trong dãy đó thỏa mãn tính chất tăng dần. Bài toán được đặt ra là in ra màn hình  số các dãy con tăng dần bậc K của dãy số AN. Ví dụ :

Input:  5    3

2    5    15   10    20  

Dòng đầu tiên ghi lại hai số N và K tương ứng với số phần tử của dãy số và bậc của dãy con.
Dòng kế tiếp : N số của dãy số AN, các số trong dãy không lớn hơn 100. 
thì Output : 7 (số các dãy con tăng dần bậc 3 của dãy số AN)

*/
#include <iostream>
using namespace std;
int n, k;
int c = 0;
int a[100];
int s[100];
int dem = 0;
void check()
{
    bool ok = true;
    for (int i = k; i > 1; i--)
    {
        if (s[a[i]] > s[a[i - 1]])
            continue;
        else
        {
            ok = false;
            break;
        }
    }
    if (ok)
        dem++;
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            check();
        else
            Try(i + 1);
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    Try(1);
    cout << dem;
}