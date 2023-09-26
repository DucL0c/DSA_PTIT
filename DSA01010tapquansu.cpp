#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        set<int> s;
        for(int i=1;i<=k;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        int dem=0;
        for(int i=1;i<=k;i++){
            if(a[i]==n-k+i){
                dem++;
            }
        }
        if(dem==k) cout<<dem<<endl;
        else{
            int i = k;
            while(i>=1 && a[i]==n-k+i){
                i--;
            }
            a[i]++;
            for(int j=i+1;j<=k;j++){
                a[j]=a[j-1]+1;
            }
            int d = 0;
            for(int j=1;j<=k;j++){
                if(s.find(a[j])==s.end()){
                    d++;
                }
            }
            cout<<d<<endl;
        }
        
    }
}