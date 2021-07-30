/*
Cho cây nhị phân, nhiệm vụ của bạn là kiểm tra xem cây nhị phân có phải là một cây hoàn hảo hay không (perfect tree)? Một cây nhị phân được gọi là cây hoàn hảo nếu tất cả các node trung gian của nó đều có hai node con và tất cả các node lá đều có cùng một mức.

Input:
Dòng đầu tiên đưa vào số lượng test T.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào số N là số lượng cạnh của cây; dòng tiếp theo đưa vào N bộ ba (u, v, x), trong đó u là node cha, v là node con, x= R nếu v là con phải, x=L nếu v là con trái; u, v, x được viết cách nhau một vài khoảng trống.
T, N, u, v, thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤u, v≤104;

Output:
Đưa ra kết quả mỗi test theo từng dòng.

Ví dụ:
Input
3
6
10 20 L 10 30 R 20 40 L 20 50 R 30 60 L 30 70 R
2
18 15 L 18 30 R
5
1 2 L 2 4 R 1 3 R 3 5 L 3 6 R

Output
Yes
Yes
No


*/
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *l, *r;
    node(int x)
    {
        data = x;
        l = r = NULL;
    }
};

void makenode(node *root, int n1, int n2, char c)
{
    if (c == 'L')
        root->l = new node(n2);

    else if (c == 'R')
        root->r = new node(n2);
}
void insert(node *root, int n1, int n2, char c)
{
    if (root == NULL)
        return;
    if (root->data == n1)
        makenode(root, n1, n2, c);
    else
    {
        insert(root->l, n1, n2, c);
        insert(root->r, n1, n2, c);
    }
}

int height(node *root)
{
    if (!root)
        return 0;
    return (1 + max(height(root->l), height(root->r)));
}
int check(node *root, int level, int h)
{
    if (!root)
        return 1;
    if (!root->l && !root->r && level < h)
        return 0;
    return check(root->l, level + 1, h) && check(root->r, level + 1, h);
}
int test(node *root)
{
    int h = height(root);
    return check(root, 1, h);
}
int cnphh(node *root)
{
    queue<node *> q;
    int s, k = 0;
    q.push(root);
    while (!q.empty())
    {
        s = q.size();
        if (s != int(pow(2, k)))
            return 0;
        for (int i = 0; i < s; i++)
        {
            node *t = q.front();
            q.pop();
            if (t->l)
                q.push(t->l);
            if (t->r)
                q.push(t->r);
        }
        k++;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        node *root = NULL;
        while (n--)
        {
            int n1, n2;
            char c;
            cin >> n1 >> n2 >> c;
            if (root == NULL)
            {
                root = new node(n1);
                makenode(root, n1, n2, c);
            }
            else
                insert(root, n1, n2, c);
        }
        if (cnphh(root))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}
