#include <bits/stdc++.h>
using namespace std;
int d[105][105];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            d[i][j] = d[j][i] = 1e9;
        }
        d[i][i] = 0;
    }
    for(int i=1;i<=m;i++){
        int x,y,w; cin>>x>>y>>w;
        d[x][y] = d[y][x] = w;
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(d[i][j] > d[i][k] + d[k][j]){
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }
    int t; cin>>t;
    while(t--){
        int x,y; cin>>x>>y;
        cout<<d[x][y]<<endl;
    }
}