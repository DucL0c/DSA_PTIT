#include <bits/stdc++.h>
using namespace std;
int a[1000],b[1000],c[1000];
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n,k;
        cin>>m>>n>>k;
        for(int i=1;i<=m;i++){
            cin>>a[i];
            c[i] = a[i];
        }
        for(int j=1;j<=n;j++){
            cin>>b[j];
            c[m+j] = b[j];
        }
        sort(c+1,c+n+m+1);
        cout<<c[k]<<endl;
    }
}