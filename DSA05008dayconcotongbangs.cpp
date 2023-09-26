#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        int dp[40005]={0};
        cin>>n>>s;
        int a;
        dp[0]=1;
        for(int i=0;i<n;i++){
            cin>>a;
            for(int j=s;j>=a;j--)
                if(dp[j-a]==1)
                    dp[j]=1;
        }
        if(dp[s]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}