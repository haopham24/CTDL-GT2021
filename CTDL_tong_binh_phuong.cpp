/*
Mọi số nguyên dương N đều có thể phân tích thành tổng các bình phương của các số nhỏ hơn N. Ví dụ số 100 = 102 hoặc 100 = 52 + 52 + 52 + 52. Cho số nguyên dương N. Nhiệm vụ của bạn là tìm số lượng ít nhất các số nhỏ hơn N mà có tổng bình phương bằng N.

Input:
    Dòng đầu tiên đưa vào số lượng bộ test T.
    Những dòng kế tiếp đưa vào các bộ test. Mỗi test là một số tự nhiên N được viết trên 1 dòng.
    T, N thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤10000.
Output:
    Đưa ra kết quả mỗi test theo từng dòng.
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[(int)1e5];
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            a[i] = i;
            for (int j = 1; j <= i; j++)
            {
                if (j * j > i)
                    break;
                else
                {
                    a[i] = min(a[i], a[i - j * j] + 1);
                }
            }
        }
        cout << a[n] << endl;
    }

    return 0;
}