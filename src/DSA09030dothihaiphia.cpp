#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool check[1005];
int truoc[1005];
bool dfs(int u){
    check[u]=false;
    for(int i:v[u]){
        if(check[i]==true){
            truoc[i] = u;
            if(dfs(i)) return true;
        }
        else if(i!=truoc[u]) return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) v[i].clear();
        memset(check,true,sizeof(check));
        memset(truoc,0,sizeof(check));
        int n,m; cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int d=0;
        for(int i=1;i<=n;i++){
            if(check[i]==true){
                if(dfs(i)==true){
                    d = 1;
                }
            }
        }
        if(d==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}