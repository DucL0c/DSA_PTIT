#include <bits/stdc++.h>
using namespace std;
long long a[10][10],b[10][10],c[10][10],m=1e9+7;
int n;
long long k;
void mul(long long a[10][10],long long d[10][10]){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c[i][j]=0;
            for(k=1;k<=n;k++)
                c[i][j]=(c[i][j]%m+(a[i][k]%m*d[k][j]%m)%m)%m;                 
        }  
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=c[i][j];                
        }  
    }
}
void powMOD(long long a[10][10],long long k){
    if(k<=1) return ;
    powMOD(a,k/2);
    mul(a,a);
    if(k%2!=0) mul(a,b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
                b[i][j] = a[i][j];
            }
        }
        powMOD(a,k);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
