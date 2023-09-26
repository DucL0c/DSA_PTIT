#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long dp[55]={0};
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=min(i,3);j++){
                dp[i] += dp[i-j];
            }
        }
        cout<<dp[n]<<endl;
    }
}