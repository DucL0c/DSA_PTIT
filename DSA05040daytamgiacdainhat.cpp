#include <bits/stdc++.h>
using namespace std;
long long dp1[100005],dp2[100005];
//day lien tuc
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5];
        for(int i=1;i<=n;i++) cin>>a[i];
        dp1[1]=dp2[n]=1;
        for(int i=2;i<=n;i++){
            if(a[i]>a[i-1])
                dp1[i] = dp1[i-1]+1;
            else
                dp1[i] = 1;
        }
        for(int i=n-1;i>=1;i--){
            if(a[i]>a[i+1])
                dp2[i] = dp2[i+1]+1;
            else
                dp2[i] = 1;
        }
        long long res=0;
        for(int i=1;i<=n;i++){
            res = max(res,dp1[i]+dp2[i]-1);
        }
        cout<<res<<endl;
    }
}