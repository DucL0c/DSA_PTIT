#include <bits/stdc++.h>
using namespace std;
long long MOD = 1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+5];
        long long dp[k+5]={0};
        for(int i=1;i<=n;i++) cin>>a[i];
        dp[0]=1;
        for(int i=1;i<=k;i++)
            for(int j=1;j<=n;j++)
                if(i>=a[j])
                    dp[i] = (dp[i-a[j]]%MOD + dp[i]%MOD)%MOD;
                
        cout<<dp[k]<<endl;
    }
}