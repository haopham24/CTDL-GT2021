#include <bits/stdc++.h>
using namespace std;

void ghi(int a[], int n)
{
	for(int i = 0; i < n; i++) cout << a[i] << ' ';
	cout << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
//	int t;cin>>t;
	int t = 1;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int dem = 1;
		for(int i = 0; i < n - 1; i++)
		{
			int min = a[i], vt = i;
			for(int j = i+1; j < n; j++)
			{
				if(a[j] < min)
				{
					vt = j;
					min = a[j];
				}
			}
			if(min != a[i])
			{
				int tmp = a[i];
				a[i] = a[vt];
				a[vt] = tmp;
				cout << "Buoc " << dem++ <<": ";
				ghi(a,n);
			}
		}
	}
    return 0;
}


