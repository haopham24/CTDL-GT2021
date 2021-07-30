/*
Cho N cột, mỗi cột có chiều cao bằng H[i]. Bạn hãy tìm hình chữ nhật lớn nhất bị che phủ bởi các cột?

Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test bắt đầu bởi số nguyên N (N ≤ 100 000).
Dòng tiếp theo gồm N số nguyên H[i] (1 ≤ H[i] ≤ 109).

Output: 
Với mỗi test, in ra diện tích hình chữ nhật lớn nhất tìm được.

Ví dụ:
Input
2
7
6 2 5 4 5 1 6
3
2 2 2

Output
12
6
*/

#include <bits/stdc++.h>
using namespace std;

long long a[1000006], L[1000006], R[1000006];

void solve()
{
	long long n;
	cin >> n;
	stack <long long> st;
	for(long long i = 0; i < n; i++) cin >> a[i];

	for(long long i = 0; i < n; i++)
	{
		while (!st.empty() && a[st.top()] >= a[i]) st.pop();
		if(!st.empty()) L[i] = st.top()+1;
		else L[i] = 0;
		st.push(i);
	}

	stack <long long> sk;
	for(long long  i = n-1; i >= 0; i--)
	{
		while ( !sk.empty() && a[sk.top()] >= a[i]) sk.pop();
		if(!sk.empty()) R[i] = sk.top()-1;
		else R[i] = n-1;
		sk.push(i);
	}
	long long ans = 0;
	for(long long i = 0; i < n; i++)
	{
		ans = max(ans, a[i]*(R[i]-L[i]+1));
	}
	cout << ans << endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--) solve();

    return 0;
}

