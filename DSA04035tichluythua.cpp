#include <bits/stdc++.h>
using namespace std;
long long M = 1e9+7;
long long powMOD(long long a,long long b){
    if(b==0) return 1;
    long long x = powMOD(a,b/2);
    if(b%2==0) return x*x%M;
    else return a*(x*x%M)%M;
}
int main(){
    while(true){
        long long a,b;
        cin>>a>>b;
        if(a==0 && b==0) break;
        cout<<powMOD(a,b)<<endl;
    }
}