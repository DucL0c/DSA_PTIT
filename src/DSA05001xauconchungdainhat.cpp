#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int a[1005][1005];
void solve(){
    memset(a,0,sizeof(a));
    cin>>s1>>s2;
    int n = s1.length();
    int m = s2.length();
    s1 = ' ' + s1;
    s2 = ' ' + s2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i]==s2[j])
                a[i][j] = a[i-1][j-1]+1;
            else
                a[i][j] = max(a[i-1][j],a[i][j-1]);
        }
    }
    cout<<a[n][m]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){  
        solve();
    }
}