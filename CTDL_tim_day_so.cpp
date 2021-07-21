/*
Cho dãy số nguyên A[] gồm có N phần tử. Nhiệm vụ của bạn là tìm dãy số B[] có tổng phần tử nhỏ nhất thỏa mãn tính chất A[i] / B[i] = A[i+1] / B[i+1] với mọi chỉ số i (0 ≤ i ≤ N-2).

Phép chia trong bài toán này là phép chia nguyên (tức là chỉ lấy phần nguyên của kết quả: ví dụ 5/3 = 1).   

Dữ liệu vào:

Dòng đầu tiên là số lượng phần tử N (1 ≤ N ≤ 1000).

Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 2000).

Kết quả: 

In ra một số nguyên là tổng các phần tử của dãy số B[] tìm được.

Ví dụ:

Input:
5
18 27 16 22 6

Output:
25

*/
#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    int sum, min = 0;
    for (int i = 0; i < n; i++) min += a[i];

    for (int i = 2; i <= a[0] / 2; i++)
    {
        sum = 0;
        int b[n], m = 0;
        for (int j = 0; j < n; j++)
        {
            int k = 1;
            while (a[j] / k > i)
            {

                k++;
            }
            if (a[j] / k == i)
                b[m++] = k;
        }

        if (m == n)
            for (int t = 0; t < n; t++)
            {
                sum += b[t];
            }
        if (sum < min && sum > 0)
            min = sum;
    }
    cout << min;
    return 0;
}