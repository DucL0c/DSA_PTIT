#include <bits/stdc++.h>
using namespace std;
int n,a[1000];
vector< vector<int> > v;
void in(int a[],int n){
    vector<int> v1;
    for(int i=0;i<n;i++){
        v1.push_back(a[i]);
    }
    v.push_back(v1);
}
void solve(int a[],int n){
    for(int i=0;i<n-1;i++){
        a[i] += a[i+1];
    }
    n--;
    if(n!=0){
       in(a,n);
       solve(a,n); 
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        v.clear();
        vector<int> v1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v1.push_back(a[i]);
        }
        v.push_back(v1);
        solve(a,n);
        for(int i=v.size()-1;i>=0;i--){
            cout<<"[";
            for(int j=0;j<v[i].size()-1;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<v[i][v[i].size()-1]<<"]";
            if(i!=0) cout<<" ";
        }
        cout<<endl;
    } 
}