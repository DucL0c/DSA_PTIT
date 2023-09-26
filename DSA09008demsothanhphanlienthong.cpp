#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool check[1005];
int n,m;
void dfs(int u){
    if(check[u]==false) return;
    check[u]=false;
    for(int i:v[u]) 
        if(check[i]==true)
            dfs(i);  
}
void lt(){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(check[i]==true){
            dem++;
            dfs(i);
        }
    }
    cout<<dem<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) v[i].clear();
        memset(check,true,sizeof(check));
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        lt();
    }
}