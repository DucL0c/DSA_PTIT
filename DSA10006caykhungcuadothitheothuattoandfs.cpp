#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
vector<pair<int,int> > ans;
bool check[1005];
void dfs(int u){
    if(check[u]==false) return;
    check[u] = false;
    for(int i:adj[u]){
        if(check[i]==true){
            ans.push_back({u,i});
            dfs(i);
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) adj[i].clear(); ans.clear();
        memset(check,true,sizeof(check));
        int n,m,s,dem=0; cin>>n>>m>>s;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(s);
        if(ans.size()==n-1){
            for(pair<int,int> i:ans){
                cout<<i.first<<" "<<i.second<<endl;
            }
        }
        else cout<<-1<<endl;
    }
}