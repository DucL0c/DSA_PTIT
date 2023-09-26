#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int x = min(k,n-k);
        int l=0,r=0;
        for(int i=0;i<n;i++){
            if(i<x) l += a[i];
            else r += a[i];
        }
        cout<<r-l<<endl;
    }
}