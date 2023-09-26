#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool check[1005];
int truoc[1005];
void bfs(int u){
    check[u] = false;
    queue<int> q;
    q.push(u);
    while(q.size()){
        int x = q.front(); q.pop();
        for(int i : v[x]){
            if(check[i]==true){
                q.push(i);
                truoc[i] = x;
                check[i] = false;
            }
        }
    }
}
void trace(int s,int e){
    if(check[e]==true){
        cout<<-1;
        return;
    }
    vector<int> a;
    while(e!=s){
        if(e==0){
            cout<<-1; return;
        }
        a.push_back(e);
        e = truoc[e];
    }
    a.push_back(s);
    reverse(a.begin(),a.end());
    for(int i:a) cout<<i<<" ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) v[i].clear();
        memset(check,true,sizeof(check));
        memset(truoc,0,sizeof(truoc));
        int n,m,s,e; cin>>n>>m>>s>>e;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
        }
        bfs(s); trace(s,e);
        cout<<endl;
    }
}