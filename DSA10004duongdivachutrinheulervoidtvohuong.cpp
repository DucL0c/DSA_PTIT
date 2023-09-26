#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int n,m;
void solve(){
    int dem=0;
    for(int i=1;i<=n;i++){
        int x=v[i].size();
        if(x%2!=0) dem++;
    }
    if(dem==0) cout<<2<<endl;// ko có bậc lẻ thì có chu trinh euler
    else if(dem==2) cout<<1<<endl; // số đỉnh có bậc lẻ là 2 thì có đường đi
    else cout<<0<<endl; // còn lại k có
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1005;i++) v[i].clear();
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        solve();
    }
}