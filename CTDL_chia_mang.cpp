/*
Cho mảng các số nguyên A[] gồm N phần tử. Hãy chia mảng số nguyên A[] thành K tập con khác rỗng sao cho tổng các phần tử của mỗi tập con đều bằng nhau. Mỗi phần tử thuộc tập con xuất hiện duy nhất một lần trong tất cả các tập con. Ví dụ với A[] = {2, 1, 4, 5, 6}, K =3 ta có kết quả {2, 4}, {1, 5}, {6}.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số N và K; dòng tiếp theo đưa vào N số của mmảng A[]; các số được viết cách nhau một vài khoảng trống.
T, N, K, A[i] thỏa mãn ràng buộc: 1≤T ≤100; 1≤N, K≤20, 0≤A[i]≤100.
Output:

Đưa ra 1 nếu có thể chia tập con thành K tập thỏa mãn yêu cầu bài toán, ngược lại đưa ra 0.
*/

#include <bits/stdc++.h>
using namespace std;

int n, a[100], x, y, z;
bool ok, kt[100];

void Try(int s, int k)
{
	if (k == z)
	{
		ok = true;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (kt[i] == false)
		{
			kt[i] = true;
			if (s == x)
			{
				Try(0, k + 1);
				return;
			}
			if (s + a[i] <= x)
			{
				Try(s + a[i], k);
			}
			else
				return;
		}
		kt[i] = false;
	}
}

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> z;
		int tong = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			tong += a[i];
			kt[i] = false;
		}

		int x = tong / z;
		if (tong % z != 0) cout << "0\n";
		else
		{
			ok = false;
			Try(0, 0);
			if (ok)
				cout << "1\n" ;
			else
				cout << "0\n";
		}
	}
}