#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n+5];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        if(n%2==0) cout<<a[n/2]<<endl;
        else cout<<a[n/2+1]<<endl;
    }
}