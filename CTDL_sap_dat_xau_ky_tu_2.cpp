//Cho xâu ký tự S bao gồm các ký tự in thường và số D. Nhiệm vụ của bạn là kiểm tra xem ta có thể sắp đặt lại các ký tự trong S để tất cả các ký tự giống nhau đều có khoảng cách là D hay không? Đưa ra 1 nếu có thể sắp đặt lại các ký tự trong S thỏa mãn yêu cầu bài toán, ngược lại đưa ra -1.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int k;
		string s;
		cin >> k >> s;
		int dd[300] = {};
		int m = 0;
		for(int i = 0; i < s.length(); i++)
		{
			dd[s[i]]++;
			if(m < dd[s[i]]) m = dd[s[i]];
		}
		
		if((m-1) * (k-1) > s.length() - m) cout << "-1\n";
		else cout << "1\n";
	}
    return 0;
}

