#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int x=-1;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                x=i+1;
                break;
            }
        }
        if(x==-1) cout<<-1<<endl;
        else{
            cout<<a[0]<<" "<<a[x]<<endl;
        }
    }
}