#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool check[1005];
int parent[1005];
bool dfs(int u){
    check[u] = false;
    for(int i : v[u]){
        if(check[i]==true) {
            parent[i] = u;
            if(dfs(i)) return true;
        }
        else if(i!=parent[u]) return true;
    }
    return false;
}
bool bfs(int u){
    check[u] = false;
    queue<int> q;
    q.push(u);
    while(q.size()){
        int x = q.front(); q.pop();
        for(int i:v[x]){
            if(check[i]==true){
                check[i] = false; q.push(i); parent[i] = x;
            }
            else if(i!=parent[x]) return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) v[i].clear();
        memset(check,true,sizeof(check));
        memset(parent,0,sizeof(parent));
        int n,m,d=0; cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            if(check[i]==true){
                if(dfs(i)){
                    d = 1;
                }
            }
        }
        if(d==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}