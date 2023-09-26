#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool check[1005];
int truoc[1005];
void bfs(int u){
    check[u]=false;
    queue<int> q;
    q.push(u);
    while(q.size()){
        int x = q.front(); q.pop();
        for(int i:v[x]){
            if(check[i]==true){
                check[i] = false;
                truoc[i] = x;
                q.push(i);
            }
        }
    }
}
void trace(int s,int e){
    if(check[e]==true){
        cout<<-1<<endl;
        return;
    }
    vector<int> ans;
    while(e!=s){
        if(e==0){
            cout<<-1<<endl;
            return;
        }
        ans.push_back(e);
        e = truoc[e];
    }
    ans.push_back(s);
    reverse(ans.begin(),ans.end());
    for(int i:ans) cout<<i<<" ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) v[i].clear();
        memset(check,true,sizeof(check));
        memset(truoc,true,sizeof(truoc));
        int n,m,s,e; cin>>n>>m>>s>>e;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        bfs(s); trace(s,e); cout<<endl;
    }
}