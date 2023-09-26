#include <bits/stdc++.h>  // bellman_ford (giong code)
using namespace std;
int n,m,s,l,d[1005],truoc[1005]; 
vector<pair<int,int> > adj[1005];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
void dijkstra(int s,int t){
    for(int i=1;i<=n;i++) d[i]=1e9;
    d[s] = 0;
    while(!q.empty()) q.pop();
    q.push({0,s});
    truoc[s] = s;
    while(!q.empty()){
        int u = q.top().second; q.pop();
        for(pair<int,int> i : adj[u]){
            int v = i.first, w = i.second;
            if(d[v] > d[u] + w){
                d[v] = d[u] + w;
                q.push({d[v],v});
                truoc[v] = u;
            }
        }
    }
    cout<<d[t]<<endl;
    vector<int> v;
    while(1){
        v.push_back(t);
        if(t==s) break;
        t = truoc[t];
    }
    reverse(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    // for(int i=1;i<=n;i++){
    //     cout<<d[i]<<" ";
    // }
    // cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) adj[i].clear();
        memset(truoc,0,sizeof(truoc));
        cin>>n>>m>>s>>l;
        for(int i=1;i<=m;i++){
            int x,y,w; cin>>x>>y>>w;
            adj[x].push_back({y,w});
            adj[y].push_back({x,w});
        }
        dijkstra(s,l);
    }
}