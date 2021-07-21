#include <bits/stdc++.h>
using namespace std;

struct dat{
	int giatri, tanso, vitri;
};

bool cmp(dat a, dat b)
{
	if(a.giatri < b.giatri) return 1;
	return 0;
}

bool cmp1(dat a, dat b)
{
	if(a.tanso > b.tanso) return 1;
	if(a.tanso == b.tanso)
	{
		if(a.giatri <= b.giatri) return 1;
	}
	return 0;
}

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		dat a[n];
		vector<int> b;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i].giatri;
			a[i].vitri = i;
		}
		sort(a,a+n,cmp);
		int dem = 1;
		int j = 0, h = 0;
		for(int i = 0; i < n ; i++)
		{
			if(a[i].giatri == a[i + 1].giatri) dem++;
			else if(a[i].giatri != a[i + 1].giatri || i == n-1)
			{
				for(int x = 0; x < dem; x++){
					a[j++].tanso = dem;
					if(x != dem-1) a[j].vitri = a[j-1].vitri; //khong can thiet
				} 
				
				dem = 1;
			}
		}
		sort(a,a+n,cmp1);
		for(int i = 0; i < n; i++) cout<<a[i].giatri<<' ';
		cout << '\n';
	}
    return 0;
}
