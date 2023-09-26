#include <bits/stdc++.h>
using namespace std;
long long m=123456789;
long long powMOD(int n,long long k){
    if(k==0) return 1;
    long long x = powMOD(n,k/2);
    if(k%2==0) return x*x%m;
    else return n*(x*x%m)%m;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<powMOD(2,n-1)<<endl;
    }
}