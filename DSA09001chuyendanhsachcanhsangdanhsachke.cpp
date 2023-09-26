#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v[1000];
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            cout<<i<<": ";
            for(int j : v[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
}




// #include <bits/stdc++.h>
// using namespace std;
// struct danhsach{
//     int x,y;
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int v,e;
//         cin>>v>>e;
//         danhsach a[e+10];
//         for(int i=1;i<=e;i++){
//             cin>>a[i].x>>a[i].y;
//         }
//         for(int i=1;i<=v;i++){
//             cout<<i<<": ";
//             for(int j=1;j<=e;j++){
//                 if(a[j].x==i) cout<<a[j].y<<" ";
//                 else if(a[j].y==i) cout<<a[j].x<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }