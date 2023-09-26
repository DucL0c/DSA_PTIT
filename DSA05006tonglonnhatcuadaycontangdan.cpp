#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[1005],dp[1005];
        int res=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            dp[i]=a[i];
            for(int j=1;j<i;j++){
                if(a[i]>a[j]){
                    dp[i] = max(dp[i],dp[j]+a[i]);
                }
            }
            res = max(res,dp[i]);
        }
        cout<<res<<endl;
    }
}