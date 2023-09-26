#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool chuaxet[1005];
void bfs(int u){
    chuaxet[u] = false;
    cout<<u<<" ";
    queue<int> q;
    q.push(u);
    while(q.size()){
        int x = q.front(); q.pop();
        for(int i : v[x]){
            if(chuaxet[i]==true){
                cout<<i<<" ";
                q.push(i);
                chuaxet[i]=false;
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=0;i<1005;i++){
           v[i].clear();
       }
        int n,m,s;
        cin>>n>>m>>s;
        for(int i=1;i<=m;i++){
        	int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            //v[y].push_back(x);
        }
        bfs(s);
        cout<<endl;
    }
}


// #include <bits/stdc++.h>
// using namespace std;
// int check[100];
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
//         int n,m,x;
//         cin>>n>>m>>x;
//         ds a[m+5];
//         for(int i=1;i<=n;i++) check[i]=1;
//         for(int i=1;i<=m;i++) cin>>a[i].x>>a[i].y;
//         queue<int> q;
//         q.push(x);
//         in(x);
//         while(q.size()){
//             int z = q.front(); q.pop();
//             for(int i=1;i<=m;i++){
//                 if(a[i].x==z && check[a[i].y]==1){
//                     in(a[i].y);
//                     q.push(a[i].y);
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }