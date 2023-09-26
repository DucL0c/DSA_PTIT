#include <bits/stdc++.h>
using namespace std;
struct ds{
    int x,y;
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int v,e;
        cin>>v>>e;
        ds a[e+5];
        for(int i=1;i<=e;i++) cin>>a[i].x>>a[i].y;
        for(int i=1;i<=v;i++){
            cout<<i<<": ";
            for(int j=1;j<=e;j++){
                if(a[j].x == i) cout<<a[j].y<<" ";
            }
            cout<<endl;
        }
    }
}