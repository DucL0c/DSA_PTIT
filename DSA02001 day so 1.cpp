#include <bits/stdc++.h>
using namespace std;
int n,a[1000];
void in(int a[],int n){
    cout<<"[";
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<"]"<<endl;
}
void solve(int a[],int n){
    for(int i=0;i<n-1;i++){
        a[i] = a[i]+a[i+1];
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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"[";
        for(int i=0;i<n-1;i++){
            cout<<a[i]<<" ";
        }
        cout<<a[n-1]<<"]"<<endl;
        solve(a,n);
        cout<<endl;
    }
}