/*
Cho mảng A[] gồm N số nguyên dương phân biệt và số X. Nhiệm vụ của bạn là tìm phép tổ hợp các số trong mảng A[] có tổng bằng X. Các số trong mảng A[] có thể được sử dụng nhiều lần. Mỗi tổ hợp các số của mảng A[] được in ra theo thứ tự không giảm các số. Ví dụ với A[] = {2, 4, 6, 8}, X = 8 ta có các tổ hợp các số như sau:

{2, 2, 2, 2}, {2, 2, 4}, {2, 6}, {4, 4}, {8}.

Input: Dòng đầu tiên đưa vào số lượng bộ test T. Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số N và X; dòng tiếp theo đưa vào N số của mmảng A[]; các số được viết cách nhau một vài khoảng trống. T, N, X, A[i] thỏa mãn ràng buộc: 1≤T ≤10; 1≤X, A[i]≤100. N ≤ 20.

Output: Đưa ra kết quả mỗi test theo từng dòng. Đầu tiên là số lượng  tổ hợp thỏa mãn. Mỗi tổ hợp được bao bởi cặp ký tự { } và cách nhau một dấu cách. Đưa ra -1 nếu không có tổ hợp nào thỏa mãn yêu cầu bài toán.

*/

#include <bits/stdc++.h>
using namespace std;

int n, k, a[105];
vector<vector<int>> res;

void Try(int i, int s, vector<int> v)
{
	if (s == k)
	{
		res.push_back(v);
		return;
	}
	if (s > k)
		return;
	for (int j = i; j < n; j++)
	{
		if (s + a[j] <= k)
		{
			v.push_back(a[j]);
			Try(j, s + a[j], v);
			v.pop_back();
		}
	}
}

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		vector<int> v;
		res.clear();
		Try(0, 0, v);
		if (res.size() == 0)
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << res.size();
			for (int i = 0; i < res.size(); i++)
			{
				cout << " {";
				for (int j = 0; j < res[i].size() - 1; j++)
				{
					cout << res[i][j] << " ";
				}
				cout << res[i][res[i].size() - 1] << "}";
			}
			cout << endl;
		}
	}
	return 0;
}