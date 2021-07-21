/*
Cho N  số nguyên dương tạo thành dãy A={A1, A2, ..., AN}. Tìm ra một dãy con của dãy A (không nhất thiết là các phần tử liên tiếp trong dãy) có tổng bằng S cho trước.

Input: Dòng đầu ghi số bộ test T (T<10).  Mỗi bộ test có hai dòng, dòng đầu tiên ghi hai số nguyên dương N và S (0 < N ≤ 200) và S (0 < S ≤ 40000). Dòng tiếp theo lần lượt ghi N số hạng của dãy A là các số A1, A2, ..., AN (0 < Ai ≤ 200).

Output:  Với mỗi bộ test, nếu bài toán vô nghiệm thì in ra “NO”, ngược lại in ra “YES”

Ví dụ:
Input:
2

5 6
1 2 4 3 5

10 15
2 2 2 2 2 2 2 2 2 2

Output:
YES
NO

*/
#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, a[40010] = {};
        cin >> n >> s;
        a[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            a[x] = 1;
            for (int j = s; j >= x; j--)
            {
                if (a[j - x]) a[j] = 1;
            }
        }
        if (a[s])cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}