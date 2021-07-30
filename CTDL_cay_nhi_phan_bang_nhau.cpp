/*
Cho hai cây nhị phân, nhiệm vụ của bạn là kiểm tra xem cây nhị phân có giống nhau hay không?

Input:
Dòng đầu tiên đưa vào số lượng test T.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng đầu tiên đưa vào số N là số lượng cạnh của cây; dòng tiếp theo đưa vào N bộ ba (u, v, x), trong đó u là node cha, v là node con, x= R nếu v là con phải, x=L nếu v là con trái của mỗi cây; u, v, x được viết cách nhau một vài khoảng trống.
T, N, u, v, thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤u, v≤104;

Output:
Đưa ra kết quả mỗi test theo từng dòng.
     
Ví dụ:

Input
2
2
1 2 L 1 3 R
2
1 2 L 1 3 R
2
1 2 L 1 3 R
2
1 3 L 1 2 R

Output
1
0
*/
#include <bits/stdc++.h>
using namespace std;

int Search(int A[], int u,int soptA)
{
    for (int i = 0; i <= soptA; i++)
    {
        if (A[i] == u)
            return i;
    }
    return -1;
}

int cmp(int A[], int B[], int soptA, int soptB)
{
    if(soptA != soptB) return 0;
    for(int i = 0; i <= soptA; i++)
    {
        if(A[i] != B[i]) return 0;
    }
    return 1;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A[100005], B[100005];
        A[0] = 1;
        B[0] = 1;
        int soptA = 1, soptB = 1;
        int u, v, n;
        char x;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> u >> v >> x;
            int p = Search(A, u, soptA);
            if (x == 'L')
            {
                A[2 * p + 1] = v;
                soptA = max(soptA, 2 * p + 1);
            }
            else if (x == 'R')
            {
                A[2 * p + 2] = v;
                soptA = max(soptA, 2 * p + 2);
            }
        }
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> u >> v >> x;
            int p = Search(B, u, soptB);
            if (x == 'L')
            {
                B[2 * p + 1] = v;
                soptB = max(soptB, 2 * p + 1);
            }
            else if (x == 'R')
            {
                B[2 * p + 2] = v;
                soptB = max(soptB, 2 * p + 2);
            }
        }
        // cout << cmp(A, B, soptA, soptB) << '\n';
        cout << soptA << ' ' << soptB;
            
    }
}
