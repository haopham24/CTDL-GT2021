/*
Cho tập từ ghi trong trừ điển dic[] và một bảng hai chiều A[M][N] các ký tự. Hãy tạo nên tất cả các từ có mặt trong từ điển dic[] bằng cách nối các ký tự kề nhau trong mảng A[][]. Chú ý, phép nối các ký tự kề nhau trong mảng A[][] được thực hiện theo 8 hướng nhưng không có phần tử A[i][j] nào được lặp lại. Ví dụ với từ điển dic[] ={ “GEEKS”, “FOR”, “QIUZ”, “GO”} và mảng A[][] dưới đây sẽ cho ta kết quả: “GEEKS”, “QUIZ”


Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào ba số K, M, N tương ứng với số từ của từ điển dic[], số hàng và số cột của ma trận ký tự A[M][N]; dòng tiếp theo đưa vào K từ của từ điển dic[]; dòng cuối cùng đưa vào các phần tử A[i][j].
T, K, M, N thỏa mãn ràng buộc: 1≤T ≤10; 1≤K≤100; 1≤ M, N ≤3.
Output:

Đưa ra theo thứ tự tăng dần các từ có mặt trong từ điển dic[] được tạo ra từ ma trận A[][]. Đưa ra -1 nếu không thể tạo ra từ nào thuộc dic[] từ A[][].
Input
1
4  3  3
GEEKS FOR QUIZ GO
G I Z

U E K

Q S E

Output
GEEKS QUIZ

*/
#include <bits/stdc++.h>
using namespace std;
int k, n, m;
string s[105];
vector<string> kq;
char a[5][5];
bool ok[5][5], ck;
int X[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void ql(int i, int j, string str)
{
    for (int u = 0; u < k; u++)
        if (s[u] == str)
            kq.push_back(str);
    for (int u = 0; u < 8; u++)
    {
        int x = i + X[u];
        int y = j + Y[u];
        if (x > 0 && x <= n && y > 0 && y <= m && ok[x][y])
        {
            ok[x][y] = false;
            ql(x, y, str + a[x][y]);
            ok[x][y] = true;
        }
    }
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k >> n >> m;
        for (int i = 0; i < k; i++)
            cin >> s[i];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        }
        kq.clear();
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                memset(ok, true, sizeof(ok));
                string s = "";
                ok[i][j] = false;
                ql(i, j, s + a[i][j]);
            }
        }
        if (kq.size())
        {
            for (int i = 0; i < kq.size(); i++)
                cout << kq[i] << ' ';
        }
        else
            cout << -1;
        cout << '\n';
    }

    return 0;
}