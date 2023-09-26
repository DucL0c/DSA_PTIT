#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool check[1005];
int d[1005][1005],c[1005][1005],n,m,x,y;
void dfs(int u){
    check[u] = false;
    queue<int> q;
    q.push(u);
    while(q.size()){
        int x = q.front(); q.pop();
        //cout<<x<<" ";
        for(int i : v[x]){
            if(d[x][i]==1 && check[i]==true){
                q.push(i);
                check[i] = false;
            }   
        } 
    }
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
        memset(d,0,sizeof(d));
        memset(c,0,sizeof(c));
        for(int i=0;i<1005;i++) v[i].clear();
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
            d[x][y]=1; d[y][x]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j : v[i]){
                if(c[i][j]==0){
                    d[i][j] = 0; d[j][i] = 0;
                    memset(check,true,sizeof(check));
                    dfs(i);
                    //cout<<endl;
                    if(lt()){
                        cout<<i<<" "<<j<<" ";
                        c[i][j] = c[j][i] = 1;
                    }
                    d[i][j] = 1; d[j][i] = 1;
                }  
            }
        }
        cout<<endl;
    }
}