#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
vector<pair<int,int>> ans;
bool check[1005];
void bfs(int u){
    check[u]=false;
    queue<int> q; q.push(u);
    while(q.size()){
        int x = q.front(); q.pop();
        for(int i:adj[x]){
            if(check[i]==true){
                check[i]=false;
                q.push(i);
                ans.push_back({x,i});
            }
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) adj[i].clear(); ans.clear();
        memset(check,true,sizeof(check));
        int n,m,s; cin>>n>>m>>s;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs(s);
        if(ans.size()==n-1){
            for(pair<int,int> i:ans){
                cout<<i.first<<" "<<i.second<<endl;
            }
        }
        else cout<<-1<<endl;    
    }
}