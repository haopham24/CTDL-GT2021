/*
Một trong những bài toán kinh điển của lý thuyết tổ hợp là Bài toán cái túi. Bài toán được phát biểu như sau: Một nhà thám hiểm cần đem theo một cái túi trọng lượng không quá W. Có N đồ vật cần đem theo. Đồ vật thứ i có trọng lượng A[i], có giá trị sử dụng C[i]. Nhiệm vụ của bạn là hãy tìm cách đưa đồ vật vào túi cho nhà thám hiểm sao cho tổng giá trị sử dụng các đồ vật trong túi là lớn nhất. Giả thiết với mỗi đồ vật, ta có thể chia nhỏ chúng ra thành nhiều phần khác nhau (Fraction Knapsack).

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào hai số N, W tương ứng với số lượng đồ vật và trọng lượng túi; phần thứ 2 đưa vào 2*N số tương ứng với trọng lượng đồ vật A[i] và giá trị sử dụng C[i] của mỗi đồ vật.
T, N, W, A[i], C[i]  thỏa mãn ràng buộc: 1≤T≤100;  1≤N, W≤100; 1≤A[i], C[i]≤100.

Output:
Đưa ra kết quả mỗi test theo từng dòng, in ra 2 chữ số sau dấu phảy.

Ví dụ:
Input:
2
3 50
60 10
100 20
120 30

2 50
60 10
100 20

Output:
240.00
160.00
*/
#include <bits/stdc++.h>

using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        double a[n][3];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i][0] >> a[i][1];
            a[i][2] = a[i][0] / a[i][1];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (a[j][2] < a[i][2])
                {
                    swap(a[i][2], a[j][2]);
                    swap(a[i][1], a[j][1]);
                    swap(a[i][0], a[j][0]);
                }
            }
        }
        int i = 0;
        double kq = 0;
        while (w > 0 && i < n)
        {
            if (a[i][1] <= w)
            {
                kq += a[i][0];
                w -= a[i][1]; //cout<<w<<' '<<kq<<'\n';
            }
            else
            {
                kq += (w / a[i][1] * a[i][0]); //cout<<w/a[i][1]*a[i][0]<<' '<<kq<<'\n';
                break;
            }

            i++;
        }
        //	cout.precision(2);
        printf("%.2lf", kq);
        cout << '\n';
    }
    return 0;
}
