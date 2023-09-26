#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int d = 1;
        for(int i=0;i<n/2;i++){
            if(b[i]==a[i] || b[i]==a[n-i-1]){
                continue;
            }
            else{
                d = 0;
            }
        }
        if(d==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}