#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n+5][m+5],d[n+5][m+5];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
                //d[i][j] = a[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i==1 && j==1) d[i][j] = a[i][j];
                else if(i==1) d[i][j] = a[i][j] + d[i][j-1];
                else if(j==1) d[i][j] = a[i][j] + d[i-1][j];
                else
                    d[i][j] = min(d[i-1][j],min(d[i][j-1],d[i-1][j-1])) + a[i][j];
            }
        }
        cout<<d[n][m]<<endl;
    }
}