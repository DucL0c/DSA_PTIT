#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,V;
        cin>>n>>V;
        int w[1005],v[1005];
        memset(dp,0,sizeof(dp));
        int res=0;
        for(int i=1;i<=n;i++) cin>>w[i];
        for(int i=1;i<=n;i++) cin>>v[i];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=V;j++){
                if(j<w[i])
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
                res = max(res,dp[i][j]);
            }
        }
        cout<<res<<endl;
    }
}