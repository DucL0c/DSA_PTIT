// #include <bits/stdc++.h>
// using namespace std;
// vector<int> v[100005];
// int n,m;
// int main(){
//     int t; cin>>t;
//     while(t--){
//         for(int i=0;i<100005;i++) v[i].clear();
//         cin>>n>>m;
//         for(int i=1;i<=m;i++){
//             int x,y; cin>>x>>y;
//             v[x].push_back(y);
//             v[y].push_back(x);
//         }
//         int d = 1;
//         for(int i=1;i<=n;i++){
//             for(int j:v[i]){
//                 if(v[j].size() != v[i].size()){
//                     d = 0;
//                     break;
//                 }
//             }
//             if(d==0) break;
//         }
//         if(d==1) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
// }


#include <bits/stdc++.h>
using namespace std;
vector<int> v[100005],v1;
bool check[100005];
int n,m,c[100005];
void dfs(int u){
    if(check[u]==false) return;
    check[u] = false;
    for(int i : v[u])
        if(check[i]==true)
            dfs(i);
}
int lt(int u){
    int dem=0;
    dfs(u);
    for(int i=1;i<=n;i++){
        if(check[i]==false && c[i]==0){
            v1.push_back(i);
            c[i] = 1;
            dem++;
        }
    }
    return dem;
}
int main(){
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) v[i].clear();
        memset(check,true,sizeof(check));
        memset(c,0,sizeof(c));
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int d = 1;
        for(int i=1;i<=n;i++){
            if(check[i]==true && v[i].size()!=0){
                v1.clear();
                int x = lt(i);
                //cout<<x<<" ";
                if(x<3) continue;
                else{
                    for(int j:v1){
                        if(v[j].size()!=x-1){
                            d = 0; break;
                        }
                    }
                }
            }
            if(d==0) break;
        }
        if(d==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}