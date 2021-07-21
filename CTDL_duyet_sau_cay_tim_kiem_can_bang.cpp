#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *l, *r;
};
node *newnode(int val)
{
    node *t = new node;
    t->data = val;
    t->l = t->r = NULL;
    return t;
}

node *createbst(int *a, int start, int end)
{
    if (start > end)
        return NULL;
    int mid = (start + end) / 2;
    node *t = newnode(a[mid]);
    t->l = createbst(a, start, mid - 1);
    t->r = createbst(a, mid + 1, end);
    return t;
}
void pre(node *t)
{
    if (t)
    {

        pre(t->l);
        pre(t->r);
        cout << t->data << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        node *t = createbst(a, 0, n - 1);
        pre(t);
        cout << endl;
    }
    return 0;
}