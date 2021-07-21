//Cho xâu ký tự S bao gồm các ký tự in thường. Nhiệm vụ của bạn là kiểm tra xem ta có thể sắp đặt lại các ký tự trong S để hai ký tự giống nhau đều không kề nhau hay không? Đưa ra 1 nếu có thể sắp đặt lại các ký tự trong S thỏa mãn yêu cầu bài toán, ngược lại đưa ra -1.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int dd[150] = {};
		int max = 0;
		for (int i = 0; i < s.length(); i++)
		{
			dd[s[i]]++;
			if (max < dd[s[i]])
				max = dd[s[i]];
		}
		int n = s.length();
		if (n % 2 == 1)
			n = n - max + 1;
		else
			n = n - max;
		if (max <= n)
			cout << "1\n";
		else
			cout << "-1\n";
	}
	return 0;
}