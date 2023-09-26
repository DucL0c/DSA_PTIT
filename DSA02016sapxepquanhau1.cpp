#include <bits/stdc++.h>
using namespace std;
int n,dem;
int a[11],c[11],xuOi[20],ngUOC[20];
void init(){
    for(int i=1;i<=n;i++){
        c[i] = 1;
    }
    for(int i=1;i<=2*n-1;i++){
        xuOi[i] = 1;
        ngUOC[i] = 1;
    }
}
void in(){
    dem++;  
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(c[j]==1 && xuOi[i-j+n]==1 && ngUOC[i+j-1]==1){
            a[i] = j;
            c[j]=0; xuOi[i-j+n]=0; ngUOC[i+j-1]=0;
            if(i==n) in();
            else Try(i+1);
            c[j]=1; xuOi[i-j+n]=1; ngUOC[i+j-1]=1;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        dem=0;
        cin>>n;
        init();
        Try(1);
        cout<<dem<<endl;
    }
}