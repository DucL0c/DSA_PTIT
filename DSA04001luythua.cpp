#include <bits/stdc++.h>
using namespace std;
long long Mod = 1000000007;
long long powMOD(int n,int k){
    if(k==0) return 1;
    long long x = powMOD(n,k/2);
    if(k%2==0) return x*x%Mod;
    else return n*(x*x%Mod)%Mod;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<(long long)powMOD(n,k)<<endl;
    }
}