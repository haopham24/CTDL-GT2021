/*
Cho dãy số A[] gồm N phần tử. Hãy tìm tổng lớn nhất của dãy con của dãy số A[] sao cho dãy con không có hai số cạnh nhau trong A[]. Ví dụ với A[] = {6, 7, 1, 3, 8, 2, 4} ta có kết quả là 19 tương ứng với tổng của dãy con {6, 1, 6, 4} không có haI phần tử nào kề nhau trong A[].

Input:
    Dòng đầu tiên đưa vào số lượng bộ test T.
    Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là một số N; dòng tiếp theo đưa vào N số A[i]; các số được viết cách nhau một vài khoảng trống.
    T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤106; 1≤A[i] ≤107.

Output:
    Đưa ra kết quả mỗi test theo từng dòng.
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;

        int x = 0, y = 0, t = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            t = x;
            x = y + a;
            y = max(t, y);
        }
        cout << max(x, y) << '\n';
    }

    return 0;
}