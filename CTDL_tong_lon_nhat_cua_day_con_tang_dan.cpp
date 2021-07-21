/*
Cho dãy số A[] gồm N số. Nhiệm vụ của bạn là tìm tổng lớn nhất của dãy con được sắp theo thứ tự tăng dần của dãy A[]. Ví dụ với dãy A[] = {1, 101, 2, 3, 100, 4, 5} ta có kết quả là 106 = 1 + 2 + 3 + 100. Với dãy A[] = {10, 7, 5} ta có kết quả là 10. Với dãy A[] = {1, 2, 3, 5} ta có kết quả là 11.

Input:
    Dòng đầu tiên đưa vào số lượng bộ test T.
    Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là số phần tử của dãy A[]; dòng tiếp theo đưa vào N số A[i]; các số được viết cách nhau một vài khoảng trống.
    T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤103; 0≤A[i] ≤103.
Output:
    Đưa ra kết quả mỗi test theo từng dòng
*/

#include <bits/stdc++.h>
using namespace std;
void act(int a[], int n)
{
    int res = 0;
    int b[(int)1e5];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                b[i] = max(b[j] + a[i], b[i]);
            }
        }
        res = max(res, b[i]);
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[(int)1e5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        act(a, n);
        cout << endl;
    }
    return 0;
}