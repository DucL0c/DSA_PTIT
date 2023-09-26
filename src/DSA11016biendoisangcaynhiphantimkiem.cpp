#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        set<int> s;
        for(int i=0;i<n;i++){
            int x,y; char z;
            cin>>x>>y>>z;
            s.insert(x);
            s.insert(y);
        }
        for(auto i:s) cout<<i<<" ";
        cout<<endl;
    }
}