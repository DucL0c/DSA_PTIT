#include <bits/stdc++.h>
using namespace std;
int n,m,parent[1005],num[1005],check;
void init(){
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
    if(a==b){
        check = 1;
        return;
    }
    if(num[a]<num[b]) swap(a,b);
    parent[b] = a;
    num[a] += num[b];
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>m;
        check=0;
        init();
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            Union(x,y);
        }
        if(check==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}