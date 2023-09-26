// #include <bits/stdc++.h>
// using namespace std;
// vector<int> v[1005];
// bool check[1005];
// int truoc[1005];
// void dfs(int u){
//     if(check[u]==false) return;
//     check[u] = false;
//     //cout<<u<<" ";
//     for(int i : v[u]){
//         if(check[i]==true){
//             truoc[i] = u;
//             dfs(i);
//         }  
//     }
// }
// void trace(int f,int l){
//     if(check[l]==true){
//         cout<<-1;
//         return;
//     }
//     vector<int> ans;
//     while(l!=f){
//         if(l==0){
//             cout<<-1<<endl;
//         }
//         ans.push_back(l);
//         l = truoc[l];
//     }
//     ans.push_back(f);
//     reverse(ans.begin(),ans.end());
//     for(int i:ans) cout<<i<<" ";
// }
// int main(){
//     int t; cin>>t;
//     while(t--){
//         for(int i=0;i<1005;i++) v[i].clear();
//         memset(check,true,sizeof(check));
//         memset(truoc,0,sizeof(check));
//         int n,m,f,l;
//         cin>>n>>m>>f>>l;
//         for(int i=1;i<=m;i++){
//             int x,y; cin>>x>>y;
//             v[x].push_back(y);
//             //v[y].push_back(x);
//         }
//         dfs(f);
//         trace(f,l);
//         cout<<endl;
//     }
// }




#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool check[1005];
int truoc[1005];
void dfs(int u){
    check[u] = false;
    stack<int> st;
    st.push(u);
    while(st.size()){
        int x = st.top(); st.pop();
        for(int i : v[x]){
            if(check[i]==true){
                st.push(x);
                st.push(i);
                check[i] = false;
                truoc[i] = x;
                break;
            }
        }
    }
}
void trace(int s,int e){
    if(check[e]==true){
        cout<<-1; return;
    }
    vector<int> a;
    while(e!=s){
        if(e==0){
            cout<<-1;
            return;
        }
        a.push_back(e);
        e = truoc[e];
    }
    a.push_back(s);
    reverse(a.begin(),a.end());
    for(int i:a) cout<<i<<" ";
}
int main(){
    int t; cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) v[i].clear();
        memset(check,true,sizeof(check));
        memset(truoc,0,sizeof(check));
        int n,m,s,e; cin>>n>>m>>s>>e;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            //v[y].push_back(x);
        }
        dfs(s);
        trace(s,e);
        cout<<endl;
    }
}