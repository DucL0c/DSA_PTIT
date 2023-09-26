#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int check[1005];
bool dfs(int u){
    check[u] = 1;
    for(int i:v[u]){
        if(check[i]==0){
            if(dfs(i)) return true;
        }
        else if(check[i]==1) return true;
    }
    check[u] = 2;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) v[i].clear();
        memset(check,0,sizeof(check));
        int n,m; cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
        }
        int d = 0;
        for(int i=1;i<=n;i++){
            if(check[i]==0){
                if(dfs(i)){
                    d = 1;
                }
            }
        }
        if(d==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}