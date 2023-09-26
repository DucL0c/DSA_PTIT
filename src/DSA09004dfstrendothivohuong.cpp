#include <bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> v[1005];
void dfs(int u){
    chuaxet[u] = false;
    cout<<u<<" ";
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
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=0;i<1005;i++) v[i].clear();
        int n,m,s,x,y;
        cin>>n>>m>>s;
        for(int i=1;i<=m;i++){
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x); 
        }
        dfs(s); cout<<endl;
    }
}



// #include <bits/stdc++.h>
// using namespace std;
// int check[100000];
// struct ds{
//     int x,y;
// };
// void in(int u){
//     cout<<u<<" ";
//     check[u]=0;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int v,e,s;
//         cin>>v>>e>>s;
//         ds a[e+5];
//         for(int i=1;i<=e;i++){
//             cin>>a[i].x>>a[i].y;
//             check[a[i].x] = check[a[i].y]=1;
//         }
//         stack<int> st;
//         st.push(s);
//         in(s);
//         while(st.size()!=0){
//             int z = st.top(); st.pop();
//             for(int i=1;i<=e;i++){
//                 if(a[i].x==z && check[a[i].y]==1){
//                     in(a[i].y);
//                     st.push(z);
//                     st.push(a[i].y);
//                     break;
//                 }
//                 else if(a[i].y==z && check[a[i].x]==1){
//                     in(a[i].x);
//                     st.push(z);
//                     st.push(a[i].x);
//                     break;
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }