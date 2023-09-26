#include <bits/stdc++.h>
using namespace std;
int n,m,l,parent[1005];
vector<int> v[1005];
bool check[1005];
bool dfs(int u){
    check[u] = false;
    for(int i:v[u]){
        if(check[i]==true){
            parent[i] = u;
            if(dfs(i)) return true;
        }
        else if(i!=parent[u]){
            l = u;
            return true;
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
        cin>>n>>m;
        for(int i=0;i<=m;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        //if(dfs(1))
            cout<<parent[3]<<" ";
        // if(dfs(1)==true){
        //     stack<int> s;
        //     s.push(1);
        //     while(l!=1){
        //         s.push(l);
        //         l = parent[l];
        //     }
        //     s.push(1);
        //     while(s.size()){
        //         cout<<s.top()<<" ";
        //         s.pop();
        //     }
        //     cout<<endl;
        // }
        // else cout<<"NO"<<endl;
    }
}