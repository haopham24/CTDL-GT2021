/*
Một chiếc cầu thang có N bậc. Mỗi bước, bạn được phép bước lên trên tối đa K bước. Hỏi có tất cả bao nhiêu cách bước để đi hết cầu thang? (Tổng số bước đúng bằng N).

Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
Mỗi test gồm hai số nguyên dương N và K(1 ≤ N ≤ 100000, 1 ≤ K ≤ 100).

Output: 
Với mỗi test, in ra đáp án tìm được trên một dòng theo modulo 109+7.

Ví dụ:
Input
2
2 2
4 2

Output
2
5

Giải thích test 1: Có 2 cách đó là (1, 1) và (2).
Giải thích test 2: 5 cách đó là: (1, 1, 1, 1), (1, 1, 2), (1, 2, 1), (2, 1, 1), (2, 2).
*/

#include <bits/stdc++.h>
using namespace std;

long long m = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		long long a[100005]={};
		a[0] = 1;
		long long n, k ;
		cin >> n >> k;
		for(long long i = 1; i <= n; i++)
		{
			for(long long j = 1; j <= min(i,k); j++)
			{
				a[i] = (a[i] +a[i-j]) % m;
			}
		}
		cout << a[n] << endl;
	}
	
	
    return 0;
}

