#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n],b[m],c[k];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<k;i++) cin>>c[i];
        int i=0,j=0,x=0,d=0;
        while(i<n && j<m && x<k){
            if(a[i]==b[j] && b[j]==c[x]){
                cout<<a[i]<<" ";
                d=1;
                i++;
                j++;
                x++;
            }
            else if(a[i]<b[j]) i++;
            else if(b[j]<c[x]) j++;
            else x++;
        }
        if(d==0) cout<<"NO";
        cout<<endl;
    }
}