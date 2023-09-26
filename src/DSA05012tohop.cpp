#include <bits/stdc++.h>
using namespace std;
long long m = 1e9+7;
long long c[1005][1005];
void solve(){
    for(int i=0;i<1005;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i)
                c[i][j] = 1;
            else
                c[i][j] = (c[i-1][j]%m + c[i-1][j-1]%m)%m;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        solve();
        cout<<c[n][k]<<endl;
    }
}