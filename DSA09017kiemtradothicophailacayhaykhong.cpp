#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool check[1005];
int truoc[1005],n;
bool dfs(int u){
    check[u] = false;
    for(int i:v[u]){
        if(check[i]==true){
            truoc[i] = u;
            if(dfs(i)) return true;
        }
        else if(i!=truoc[u]) return true;
    }
    return false;
}
void dfs1(int u){
    if(check[u]==false) return;
    check[u] = false;
    //cout<<u<<" "; 
    for(int i:v[u]){
        if(check[i]==true){
            dfs1(i);
        }
    }
}
bool lt(){
    for(int i=1;i<=n;i++)
        if(check[i]==true)
            return false;
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) v[i].clear();
        memset(check,true,sizeof(check));
        memset(truoc,0,sizeof(truoc));
        cin>>n;
        for(int i=1;i<=n-1;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        dfs1(1); cout<<endl;
        // check lieen thong la du
        if(lt()){
            //if(dfs(1)==true) 
            cout<<"YES"<<endl;
            //else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}