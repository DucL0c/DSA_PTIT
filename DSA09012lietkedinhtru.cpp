#include <bits/stdc++.h>
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
int lt(){
    for(int i=1;i<=n;i++){
        if(check[i]==true){
            return 1;
        }
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) v[i].clear();
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            memset(check,true,sizeof(check));
            check[i] = false;
            if(i==1) dfs(2);
            else dfs(1);
            if(lt()==1) cout<<i<<" ";
            check[i] = true;
        }
        cout<<endl;
    }
}