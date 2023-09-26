#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        int c[m+n];
        int j=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            c[j] = a[i];
            j++;
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            c[j] = b[i];
            j++;
        }
        sort(c,c+n+m);
        for(int i=0;i<n+m;i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}