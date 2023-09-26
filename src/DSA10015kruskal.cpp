#include <bits/stdc++.h>
using namespace std;
int n,m,parent[105],num[105];
struct canh{
    int x,y,w;
};
void make_set(){
    for(int i=1;i<=n;i++){
        parent[i] = i;
        num[i] = 1;
    }
}
int find(int u){
    if(u!=parent[u]){
        parent[u] = find(parent[u]);
    }
    return parent[u];
}
bool Union(int u,int v){
    int a = find(u), b = find(v);
    if(a==b) return false;
    if(num[a] < num[b]) swap(a,b);
    parent[b] = a;
    num[a] += num[b];
    return true;
}
bool cmp(canh a,canh b){
    return a.w<b.w;
}
int main(){
    int t; cin>>t;
    while(t--){
        vector<canh> adj;
        cin>>n>>m; make_set();
        for(int i=1;i<=m;i++){
            int x,y,w; cin>>x>>y>>w;
            adj.push_back({x,y,w});
        }
        vector<canh> mst;
        int d = 0;
        sort(adj.begin(),adj.end(),cmp);
        for(int i=0;i<m;i++){
            if(mst.size()==n-1) break;
            canh e = adj[i];
            if(Union(e.x,e.y)==true){
                mst.push_back(e);
                d += e.w;
            }
        }
        cout<<d<<endl;
        // for(auto e:mst){
        //     cout<<e.x<<" "<<e.y<<" "<<e.w<<endl;
        // }
    }
}