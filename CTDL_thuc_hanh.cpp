#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *l,*r;
	node(int x){
		data=x;
		l=r= NULL;
	}
};	

void makenode(node *root,int n1,int n2,char c){
    if(c=='L') root->l=new node(n2);
                
       else if(c=='R') root->r=new node(n2);
               
}

void insert(node *root,int n1,int n2,char c){
     if(root==NULL) return;
     if(root->data == n1)
         makenode(root,n1,n2,c);
     else{
         insert(root->l,n1,n2,c);
         insert(root->r,n1,n2,c);
     }
}

int height(node *root){
	if(!root) return 0;
	return (1+max(height(root->l),height(root->r)));
}

int check(node *root,int level,int h){
	if(!root) return 1;
	if(!root->l&&!root->r&&level<h) return 0;
	return check(root->l,level+1,h)&&check(root->r,level+1,h);
}

int test(node *root){
	int h=height(root);
	return check(root,1,h);
}

int main(){
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		node *root=NULL;
		while(n--){
			int n1,n2; char c;
			cin>>n1>>n2>>c;
			if(root==NULL){
				root=new node(n1);
				makenode(root,n1,n2,c);
			}
			else insert(root,n1,n2,c);
		}
		cout<<test(root);
		cout << endl;
  }
}