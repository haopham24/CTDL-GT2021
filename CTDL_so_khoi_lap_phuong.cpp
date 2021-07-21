/*
Một số X được gọi là số khối lập phương nếu X là lũy thừa bậc 3 của số Y (X= Y^3). Cho số nguyên dương N, nhiệm vụ của bạn là tìm số khối lập phương lớn nhất bằng cách loại bỏ đi các chữ số của N. Ví dụ số 4125 ta có kết quả là 125 = 5^3.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
T, N thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤1018.
Output:

Đưa ra kết quả mỗi test theo từng dòng. Nếu không tìm được đáp án in ra -1.
*/
#include <bits/stdc++.h>
using namespace std;

int x[20];
long long m;
vector<int> a;
bool kt(long long kq)
{
    float k = pow(kq, 1.0 / 3); //cout<<kq<<','<<k<<' ';
    long long u = k;
    if (pow(u, 3) == kq)
        return true;
    return false;
}
void Try(int i, int n)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n - 1)
        {
            long long kq = 0;
            for (int k = 0; k < n; k++)
            {
                if (x[k])
                    kq = kq * 10 + a[k];
            }
            if (kt(kq) && kq != 0 && m < kq)
                m = kq;
        }
        else
            Try(i + 1, n);
    }
}
main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        a.clear();
        while (n)
        {
            a.push_back(n % 10);
            n /= 10;
        }
        reverse(a.begin(), a.end());
        m = -1;
        Try(0, a.size());
        cout << m << '\n';
    }
    return 0;
}