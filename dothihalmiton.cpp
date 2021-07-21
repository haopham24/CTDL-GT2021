#include<bits/stdc++.h>

using namespace std;
class Dothi{
    int n, A[100][100];
    public:
    int    s, X[100];
    bool   chuaxet[100];
    void   readdata();
    void   inIt();
    void   hmt(int k);
};
void    Dothi::readdata(){
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++) cin>>A[i][j];
}
void  Dothi::inIt(){ for(int i=1;i<=n;i++) chuaxet[i]=true; }
void  Dothi::hmt(int k){
    for(int y=1;y<=n;y++){
        if(A[X[k-1]][y]==1){
            if((k==n+1)&&(y==X[1])){
                for(int i=1; i<=n; i++) cout<<X[i]<<" "; cout<<X[1]<<'\n';
               }
               else{
                   if(chuaxet[y]==true){
                       X[k]=y; chuaxet[y]=false; hmt(k+1); chuaxet[y]=true;
                   }
               }
            }
        }
    }
int main(){ Dothi g;
    g.readdata();
    g.X[1]=g.s;
    g.inIt();
    g.chuaxet[g.s]=false;
    g.hmt(2);
}
    


