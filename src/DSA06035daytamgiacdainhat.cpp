#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5],dp1[n+5],dp2[n+5];
        for(int i=1;i<=n;i++) cin>>a[i];
        int res=0;
        dp1[1]=1;dp2[n]=1;
        for(int i=2;i<=n;i++){
            if(a[i]>a[i-1]) dp1[i] = dp1[i-1]+1;
            else dp1[i]=1;
        }
        for(int i=n-1;i>=1;i--){
            if(a[i]>a[i+1]) dp2[i] = dp2[i+1]+1;
            else dp2[i]=1;
        }
        for(int i=1;i<=n;i++){
            res = max(res,dp1[i]+dp2[i]-1);
        }
        cout<<res<<endl;
    }
}