/*
Khi chat chit vui vẻ, anh em chiến hữu thường hay gõ HAHA để thể hiện sự sảng khoái. Đôi khi cũng có thể gõ HAHAAAAA chẳng hạn cho thêm phần nhấn mạnh.

Giả sử một xâu ký tự được coi là HAHA nếu thỏa mãn các điều kiện:

Ký tự đầu tiên phải là chữ H, ký tự cuối cùng phải là chữ A
Không có hai chữ H nào liền nhau
Cho trước độ dài N, hãy liệt kê tất cả các xâu ký tự HAHA theo thứ tự từ điển.

Input

Dòng đầu ghi số bộ test T (không quá 10)
Mỗi bộ test ghi độ dài N (2 <= N < 16)
Output

Với mỗi bộ test, ghi ra tất cả các xâu HAHA tìm được theo thứ tự từ điển, mỗi xâu viết trên một dòng.

*/
#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[20];
        int n;
        cin >> n;
        a[0] = 'H';
        for (int i = 1; i < n; i++)
            a[i] = 'A';
        while (1)
        {
            int ok = 1;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == 'H' && a[i + 1] == 'H')
                {
                    ok = 0;
                    break;
                }
            }
            if (ok)
            {
                for (int i = 0; i < n; i++)
                    cout << a[i];
                cout << '\n';
            }
            int i = n - 2;
            while (i >= 2 && a[i] == 'H')
            {
                a[i] = 'A';
                i--;
            }
            if (i < 2)
                break;
            else
            {
                a[i] = 'H';
            }
        }
    }
    return 0;
}