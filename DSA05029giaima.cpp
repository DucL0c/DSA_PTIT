#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int dp[45]={0};
        int n=s.length();
        dp[0]=dp[1]=1;
        if(s[0]=='0') cout<<0<<endl;
        else{
            for(int i=2;i<=n;i++){
                if(s[i-1]>'0')
                    dp[i] += dp[i-1];
                if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<'7'))
                    dp[i] += dp[i-2];
            }
            cout<<dp[n]<<endl;
        }
    }
}