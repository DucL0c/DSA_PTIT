#include <bits/stdc++.h>
using namespace std;
int count(int x,int Y[],int m,int f[]){
    if(x==0) return 0;
    if(x==1) return f[0];
    int* idx = upper_bound(Y,Y+m,x);
    int ans = (Y+m) - idx;
    ans += f[0] + f[1];
    if(x==2) ans -= (f[3] + f[4]);
    if(x==3) ans += f[2];
    return ans;
}
void calc(int X[],int Y[],int n,int m){
    int f[5]={},ans=0;
    for(int i=0;i<m;i++)
        if(Y[i]<5)
            f[Y[i]]++;
    sort(Y,Y+m);
    for(int i=0;i<n;i++){
        ans += count(X[i],Y,m,f);
    }
    cout<<ans<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int X[n+5],Y[m+5];
        for(int i=0;i<n;i++) cin>>X[i];
        for(int j=0;j<m;j++) cin>>Y[j];
        calc(X,Y,n,m);
    }
}