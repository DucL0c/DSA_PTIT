#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        set<int> s1,s2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s1.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            if(s1.find(b[i])!=s1.end()){
                s2.insert(b[i]);
            }
            s1.insert(b[i]);
        }
        for(auto x:s1){
            cout<<x<<" ";
        }
        cout<<endl;
        for(auto x:s2){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
