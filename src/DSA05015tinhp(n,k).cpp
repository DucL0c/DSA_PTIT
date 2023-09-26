#include <bits/stdc++.h>
using namespace std;
long long MOD = 1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long res=1;
        if(k>n) cout<<0<<endl;
        else{
            for(int i=n;i>=n-k+1;i--){
                res = res*i%MOD;
            }
            cout<<res<<endl;
        } 
    }
}