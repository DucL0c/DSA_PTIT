#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int v[1005]={0}, r[1005]={0};
        for(int i=1;i<=m;i++){
            int x,y;cin>>x>>y;
            v[x]++; r[y]++;
        }
        int d = 1;
        for(int i=1;i<=n;i++){
            if(v[i]!=r[i]){
                d = 0; break;
            }
        }
        if(d==1) cout<<1<<endl;// bán bậc ra bằng bán bậc vào thì có chu trình euler
        else cout<<0<<endl;
    }
}