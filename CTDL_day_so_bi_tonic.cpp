/*
Một dãy số được gọi là Bi-tonic nếu nó được chia thành hai dãy đầu tăng dần và dãy tiếp theo giảm dần. Nhiệm vụ của bạn là tìm tổng lớn nhất dãy con Bi-tonic của dãy số A[]. Ví dụ với dãy A[] = {1, 15, 51, 45, 33, 100, 12, 18, 9} ta có kết quả là 194 tương ứng với dãy Bi-tonic {1, 15, 51, 100, 18, 9}.

Input:
    Dòng đầu tiên đưa vào số lượng bộ test T.
    Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là số phần tử của dãy A[]; dòng tiếp theo đưa vào N số A[i]; các số được viết cách nhau một vài khoảng trống.
    T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤100; 0≤A[i] ≤100.

Output:
    Đưa ra kết quả mỗi test theo từng dòng.
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void act(int *a, int n)
{
    int b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                b[i] = max(b[i], b[j] + a[i]);
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        c[i] = a[i];
        for (int j = n - 1; j > i; j--)
        {
            if (a[i] > a[j])
            {
                c[i] = max(c[i], c[j] + a[i]);
            }
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = max(c[i] + b[i] - a[i], res);
    }
    cout << res;
}
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[(int)1e4];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        act(a, n);
        cout << endl;
    }
    return 0;
}