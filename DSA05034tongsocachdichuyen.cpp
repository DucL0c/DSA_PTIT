#include <bits/stdc++.h>
using namespace std;
long long MOD = 1e9+7,dp[100005];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        memset(dp,0,sizeof(dp));
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=min(i,k);j++){
                dp[i] += dp[i-j];
                dp[i] = dp[i]%MOD;
            }
        }
        cout<<dp[n]<<endl;
    }
}