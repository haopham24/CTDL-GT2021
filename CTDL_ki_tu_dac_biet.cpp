/*
Cho một xâu s. Xâu F(s) được xác định bằng cách ghép xâu xâu s ban đầu với xâu s sau khi đã được quay vòng sang bên phải 1 kí tự (kí tự cuối cùng của s được chuyển lên đầu).

Thực hiện liên tiếp các bước cộng xâu như trên với xâu mới thu được, ta có được xâu X.

  

Nhiệm vụ của bạn là hãy xác định kí tự thứ N trong xâu X là kí tự nào?

Input: Dòng đầu ghi số bộ test T (T<10). Mỗi bộ test gồm một xâu s có độ dài không vượt quá 30 kí tự và số nguyên N (1 ≤ N ≤ 1018).

Output: Với mỗi bộ test ghi ra trên một dòng kí tự tìm được.

Ví dụ:

Input
1
COW 8

Output

C

Giải thích test: COW -> COWWCO -> COWWCOOCOWWC. Kí tự thứ 8 là ‘C’.

*/
#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long n, k;
        cin >> k;
        n = s.size();
        while (n < k)
            n *= 2;
        while (n > s.size())
        {
            if (k > n / 2)
            {
                k -= n / 2;
                if (k > 1)
                    k--;
                else
                    k = n / 2;
            }
            n /= 2;
        }
        cout << s[k - 1] << '\n';
    }

    return 0;
}