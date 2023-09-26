#include <bits/stdc++.h>
using namespace std;
long long a[1000005];
void solve(long long n, long long k){
    while(n>=2){
        if(k<=a[n-1]) n = n-1;
        else if(a[n]/2+1==k) break;
        else{
            k = k-a[n-1]-1;
            n = n-1;
        }
    }
    if(k==1) cout<<"A"<<endl;
    else if(a[n]/2+1==k) cout<<char(64+n)<<endl;
}
int main(){
    int t;
    cin>>t;
    a[1]=1;
    for(int i=2;i<=25;i++) a[i] = a[i-1]*2+1;
    while(t--){
        long long n,k;
        cin>>n>>k;
        solve(n,k);
    }
}