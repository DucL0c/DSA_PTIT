#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool check[1005];
int n,m,d;
void hamilton(int u,int count){
    if(count==n){
        d = 1; return;
    }
    for(int i:v[u]){
        if(check[i]==true){
            check[i] = false;
            hamilton(i,count+1);
            check[i] = true;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) v[i].clear();
        memset(check,true,sizeof(check));
        cin>>n>>m; d = 0;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        } 
        for(int i=1;i<=n;i++){
            check[i] = false;
            hamilton(i,1);
            check[i] = true;
        }
        cout<<d<<endl;
    }
}