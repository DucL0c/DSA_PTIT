#include <bits/stdc++.h>
using namespace std;
long long m = 1e9+7;
long long a[2][2],b[2][2];
void mul(long long a[2][2],long long c[2][2]){
    long long x = ((a[1][1]*c[1][1])%m + (a[1][2]*c[2][1])%m)%m;
    long long y = ((a[1][1]*c[1][2])%m + (a[1][2]*c[2][2])%m)%m;
    long long z = ((a[2][1]*c[1][1])%m + (a[2][2]*c[2][1])%m)%m;
    long long t = ((a[2][1]*c[1][2])%m + (a[2][2]*c[2][2])%m)%m;
    a[1][1]=x;a[1][2]=y;
    a[2][1]=z;a[2][2]=t;
}
void powMOD(long long a[2][2],long long n){
    if(n<=1) return;
    powMOD(a,n/2);
    mul(a,a);
    if(n%2!=0) mul(a,b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        a[1][1] = a[1][2] = a[2][1] = 1;
        a[2][2] = 0;
        b[1][1] = b[1][2] = b[2][1] = 1;
        b[2][2] = 0;
        long long n;
        cin>>n;
        powMOD(a,n-1);
        cout<<a[1][1]<<endl;
    }
}