#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a;
        int c[a.length() + 100][a.length() + 100];
        char a1[a.length() + 10], b1[a.length() + 10];
        for (int i = 0; i < a.length(); i++)
        {
            a1[i + 1] = a[i];
        }
        for (int i = 0; i < a.length(); i++)
        {
            b1[i + 1] = a[a.length() - i - 1];
        }
        for (int i = 0; i <= a.length(); i++)
        {
            for (int j = 0; j <= a.length(); j++)
            {
                c[i][j] = 0;
            }
        }
        int n = b.length(), m = a.length();
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a1[j] == b1[i])
                {
                    c[i][j] = c[i - 1][j - 1] + 1;
                }
            }
        }

        int mx = 0;
        for (int i = 0; i <= a.length(); i++)
        {
            for (int j = 0; j <= a.length(); j++)
            {
                mx = max(c[i][j], mx);
            }
        }
        cout << mx << endl;
    }
    return 0;
}

/*
Cho xâu S chỉ bao gồm các ký tự viết thường và dài không quá 1000 ký tự.

Hãy tìm xâu con đối xứng dài nhất của S.

Input:
    Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
    Mỗi test gồm một xâu S có độ dài không vượt quá 1000, chỉ gồm các kí tự thường.
Output:
    Với mỗi test, in ra đáp án tìm được.
Ví dụ:
Input:
    2
    abcbadd
    aaaaa
Output:
    5
    5
*/