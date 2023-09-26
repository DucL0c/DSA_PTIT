#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool check[1005];
int n,m; 
void bfs(int u){
    check[u]=false;
    queue<int> q;
    q.push(u);
    while(q.size()){
        int x = q.front(); q.pop();
        for(int i:v[x]){
            if(check[i]==true){
                check[i] = false;
                q.push(i);
            }
        }
    }
}
void lt(){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(check[i]==true){
            dem++;
            bfs(i);
        }
    }
    if(dem==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
            //v[y].push_back(x);
        }
        lt();
    }
}