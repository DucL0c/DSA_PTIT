#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,a[1000];
        cin>>n>>k;
        for(int i=1;i<=k;i++){
            cin>>a[i];
        }
        int dem=0;
        for(int i=1;i<=k;i++){
            if(a[i]!=n-k+i){
                dem=1;
                break;
            }
        }
        if(dem==0){
            for(int i=1;i<=k;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            int x = k;
            while(x!=0){
                if(a[x]==n-k+x){
                    x--;
                }
                else{
                    a[x]++;
                    for(int i=x+1;i<=k;i++){
                        a[i] = a[i-1] + 1;  
                    }
                    break;
                }
            }
            for(int i=1;i<=k;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}