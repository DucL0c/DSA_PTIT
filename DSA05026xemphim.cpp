#include <bits/stdc++.h>
using namespace std;
int a[105],dp[105][25005];
int main(){
    int c,n;
    cin>>c>>n;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }   
    int res=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
            if(a[i]>j)
                dp[i][j] = dp[i-1][j];
            else 
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-a[i]]+a[i]);
            res = max(res,dp[i][j]);
        }
    }
    cout<<res<<endl;
}