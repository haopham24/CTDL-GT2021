#include<iostream>
using namespace std;

main() {
    int n;
    cin>>n;
	int a[100];
	for(int i=0;i<n;i++) cin>>a[i]; 
	for(int i=0;i<n-1;i++) 
	{ 
		for(int j=i+1;j<n;j++) 
		{ 
			if(a[i]>a[j]) 
			{  
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp; 
			} 
		} 
		cout<<"Buoc "<<i+1<<": ";
		for(int i=0;i<n;i++) cout<<a[i]<<" "; 
		cout<<endl;  
	} 
	return 0;
 }
