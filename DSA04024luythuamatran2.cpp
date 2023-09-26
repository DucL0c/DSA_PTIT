#include <bits/stdc++.h>
using namespace std;
long long a[11][11],b[11][11],c[11][11];
long long m = 1e9+7,n,k;
void mul(long long a[11][11],long long d[11][11]){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c[i][j]=0;
            for(int z=1;z<=n;z++)
                c[i][j] = (c[i][j]%m + (a[i][z]%m*d[z][j]%m)%m)%m;
        }
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            a[i][j] = c[i][j];
}
void powMOD(long long a[11][11],long long k){
    if(k<=1) return;
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
                b[i][j]=a[i][j];
            }
        }
        powMOD(a,k);
        long long s=0;
        for(int i=1;i<=n;i++){
            s = (s%m + a[i][n]%m)%m;
        }
        cout<<s<<endl;
    }
}