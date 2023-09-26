#include <bits/stdc++.h>
using namespace std;
int dp[10005];
void init(){
    dp[0]=0, dp[1]=1, dp[2]=2, dp[3]=3;
    for(int i=4;i<=10005;i++){
        dp[i]=i;
        for(int j=1;j<=sqrt(i);j++){
            dp[i] = min(dp[i],dp[i-j*j]+1);
        }
    }
}
int main(){
    int t;
    cin>>t;
    init();
    while(t--){
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
}