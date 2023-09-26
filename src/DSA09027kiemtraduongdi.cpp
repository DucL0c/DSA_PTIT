#include <bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> v[1005];
void dfs(int u){
    chuaxet[u] = false;
    //cout<<u<<" ";
    for(int i : v[u]){
        if(chuaxet[i] == true){
            dfs(i);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) v[i].clear();
        int n,m,s,x,y;
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x); 
        }
        int k;
        cin>>k;
        while(k--){
        	int i,j;
        	memset(chuaxet,true,sizeof(chuaxet));
        	cin>>i>>j;
        	dfs(i);
        	if(chuaxet[j]==true) cout<<"NO"<<endl;
        	else cout<<"YES"<<endl;
		}
    }
}
