#include <bits/stdc++.h>
using namespace std;
int n,m,ans,parent[100005], num[100005];
void init(){
    ans = 0;
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
void Union(int u,int v){
    int a = find(u); int b = find(v);
    if(a==b) return;
    if(num[a]<num[b]) swap(a,b);
    parent[b] = a;
    num[a] += num[b];
    ans = max(ans,num[a]);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        init();
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            Union(x,y);
        }
        cout<<ans<<endl;
    }
}