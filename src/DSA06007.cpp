#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[i] = a[i];
        }
        vector<int> v;
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++){
            if(a[i]!=b[i]){
                v.push_back(i);
            }
        }
        cout<<v[0]<<" "<<v[v.size()-1]<<endl;
    }
}