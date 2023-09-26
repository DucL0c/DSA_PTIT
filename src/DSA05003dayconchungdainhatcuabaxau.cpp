#include <bits/stdc++.h>
using namespace std;
int dp[105][105][105];
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(dp,0,sizeof(dp));
        int n,m,p;
        string x,y,z;
        cin>>n>>m>>p>>x>>y>>z;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                for(int k=1;k<=p;k++){
                    if(x[i-1]==y[j-1] && y[j-1]==z[k-1])
                        dp[i][j][k] = dp[i-1][j-1][k-1]+1;
                    else 
                        dp[i][j][k] = max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
                }
            }
        }
        cout<<dp[n][m][p]<<endl;
    }
}