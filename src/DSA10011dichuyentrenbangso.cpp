#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adj[1005];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
int n,m,d[1005]; 
void Dijkstra(int u){
    for(int i=1;i<=m;i++) d[i] = 1e9; d[u] = 0 ;
    while(!q.empty()) q.pop();
    q.push({0,u});
    while(!q.empty()){
        int v = q.top().second; q.pop();
        for(auto i:adj[v]){
            int u = i.first, w = i.second;
            if(d[v] > d[u] + w){
                d[v] = d[u] + w;
                q.push({d[v],v});
            }
        }
    }
    for(int i=1;i<=m;i++){
        cout<<d[i]<<" ";
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) adj[i].clear();
        cin>>n>>m;
        int a[n][m];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
                adj[i].push_back({j,a[i][j]});
            }
        }
        Dijkstra(1);
    }
}