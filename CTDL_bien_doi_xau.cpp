/*
Cho hai xâu ký tự str1, str2 bao gồm các ký tự in thường và các thao tác dưới đây:
Insert: chèn một ký tự bất kỳ vào str1.
Delete: loại bỏ một ký tự bất kỳ trong str1.
Replace: thay một ký tự bất kỳ trong str1.
Nhiệm vụ của bạn là đếm số các phép Insert, Delete, Replace ít nhất thực hiện trên str1 để trở thành str2.

Input:
    Dòng đầu tiên đưa vào số lượng bộ test T.
    Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ đôi hai xâu str1 và str2.
    T, str1, str2 thỏa mãn ràng buộc: 1≤T≤100;  1≤length(str1),length(str2) ≤100.

Output:
    Đưa ra kết quả mỗi test theo từng dòng.
*/

#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.length();
        int m = s2.length();
        int kq[n + 2][m + 2];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                    kq[i][j] = i + j;
                else if (s1[i - 1] == s2[j - 1])
                    kq[i][j] = kq[i - 1][j - 1];
                else
                    kq[i][j] = min(kq[i - 1][j - 1], min(kq[i - 1][j], kq[i][j - 1])) + 1;
            }
        }
        cout << kq[n][m] << '\n';
    }
    return 0;
}