#include <bits/stdc++.h>
using namespace std;
long long M=1e9+7;
long long powMOD(long long n,long long r){
    if(r==0) return 1;
    long long x = powMOD(n,r/2);
    if(r%2==0) return (x*x)%M;
    else return n*(x*x%M)%M;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long k=n,r=0;
        while(k!=0){
            r = r*10 + k%10;;
            k/=10;
        }
        cout<<(long long)powMOD(n,r)<<endl;
    }
}