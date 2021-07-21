/*
Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A[N][N]. Một con chuột đi từ ô đầu tiên góc trái (A[0][0]) đến ô cuối cùng góc phải (A[N-1][N-1]) theo nguyên tắc:

Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.
Left (L): Chuột được phép sang trái dưới nếu ô bên trái nó có giá trị 1.
Up (U): Chuột được phép lên trên nếu ô trên nó có giá trị 1.
Hãy đưa ra tất cả các hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là kích cỡ của mê cung; dòng tiếp theo đưa vào ma trận nhị phân A[N][N].
T, N, A[i][j] thỏa mãn ràng buộc: 1≤T ≤10; 2≤N≤8; 0≤A[i][j] ≤1.
Output:

Đưa ra các xâu ký tự được sắp xếp, trong đó mỗi xâu là một đường đi của con chuột trong mê cung. In ra đáp án theo thứ tự từ điển. Đưa ra -1 nếu chuột không đi được đến đích.
*/

#include <bits/stdc++.h>
using namespace std;

int a[100][100], b[100][100], n, ok;
char x[(int)1e6];

void print(int k)
{
    for (int i = 0; i < k; i++) cout << x[i];
    cout << " ";
}
void abc(int i, int j, int k)
{
    if (i == n - 1 && j == n - 1)
    {
        ok = 1;
        print(k);
    }
    else
    {
        if (a[i + 1][j] == 1 && b[i + 1][j] == 1 && i < n - 1)
        {
            b[i + 1][j] = 0;
            x[k] = 'D';
            abc(i + 1, j, k + 1);
            b[i + 1][j] = 1;
        }
        if (a[i][j - 1] == 1 && b[i][j - 1] == 1 && j >= 1)
        {
            b[i][j - 1] = 0;
            x[k] = 'L';
            abc(i, j - 1, k + 1);
            b[i][j - 1] = 1;
        }
        if (a[i][j + 1] == 1 && b[i][j + 1] == 1 && j < n - 1)
        {
            b[i][j + 1] = 0;
            x[k] = 'R';
            abc(i, j + 1, k + 1);
            b[i][j + 1] = 1;
        }
        if (a[i - 1][j] == 1 && b[i - 1][j] == 1 && i >= 1)
        {
            b[i - 1][j] = 0;
            x[k] = 'U';
            abc(i - 1, j, k + 1);
            b[i - 1][j] = 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ok = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                b[i][j] = 1;
            }
        }
        b[0][0] = 0;
        if (a[0][0] == 0) cout << -1;
        else
        {
            abc(0, 0, 0);
            if (!ok) cout << -1;
        }
        cout << endl;
    }
    return 0;
}