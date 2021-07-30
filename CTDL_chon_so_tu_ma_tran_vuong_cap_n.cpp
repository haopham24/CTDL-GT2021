/*
Cho ma trận vuông Ci,j cấp N (1£ i, j £ N£10) gồm N2 số tự nhiên và số tự nhiên K (các số trong ma trận không nhất thiết phải khác nhau và đều không quá 100, K không quá 104). Hãy viết chương trình lấy mỗi hàng, mỗi cột duy nhất một phần tử sao cho tổng các phần tử này đúng bằng K.
Dữ liệu vào: Dòng 1 ghi hai số N và K. N dòng tiếp theo ghi ma trận C. 
Kết quả: dòng đầu ghi số cách tìm được. Mỗi dòng tiếp theo ghi một cách theo vị trí của số đó trong lần lượt từng hàng của ma trận. Xem ví dụ để hiểu rõ hơn. 

Ví dụ:
INPUT
3 10
2 4 3
1 3 6
4 2 4

OUTPUT
2
1 3 2
3 2 1
*/

#include<bits/stdc++.h>
using namespace std;

int n, k, a[15], b[15][15];
bool visit[15];
vector<int> ans;

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!visit[j])
        {
            a[i] = j;
            visit[j] = true;
            if(i == n)
            {
                int sum = 0;
                for(int x = 1; x <= n; x++)
                {
                    sum += b[x][a[x]];
                }
                if(sum == k)
                {
                    for(int x = 1; x <= n; x++) ans.push_back(a[x]);
                }
            }
            else Try(i+1);
            visit[j] = false;
        }
    }
}

main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) cin >> b[i][j];
    }
    Try(1);
    cout << ans.size()/n << '\n';
    for(int i = 0; i < ans.size(); i += n)
    {
        for(int j = i; j < i+n; j++) cout << ans[j] << ' ';
        cout << '\n';
    }
    return 0;
}
