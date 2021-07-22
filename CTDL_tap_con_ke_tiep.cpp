#include<iostream>

using namespace std;
int n,k,a[1005];

void init()
{
	for(int i=1;i<=k;i++) cin >> a[i];
}
void ghi()
{
	for(int i=1;i<=k;i++) cout<<a[i]<<' ';
	cout<<'\n';
}
void sinh()
{
	
		int i=k;
		while(i>=1&&a[i]==n-k+i)
		{
			i--;
		}
		if(i>=1)
		{
			a[i]++;
			for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
		}
		else 
			for(int i=1;i<=k;i++) a[i]=i;
		
	ghi();
}

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		init();
		sinh();
	}
	
	return 0;
}