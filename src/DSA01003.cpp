#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[1001];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int dem=0;
        for(int i=1;i<=n-1;i++){
            if(a[i]<a[i+1]){
                dem = 1;
                break;
            }
        }
        if(dem==0){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            int k = n-1;
            while(k!=0){
                if(a[k]>a[k+1]){
                    k--;
                }
                else{
                    int x = n;
                    while(a[x]<a[k]){
                        x--;
                    }
                    swap(a[x],a[k]);
                    int l = k+1,r=n;
                    while(l<r){
                        swap(a[l],a[r]);
                        l++;r--;
                    }
                    break;
                }
            }
            for(int i=1;i<=n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}