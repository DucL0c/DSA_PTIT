#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[100005];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int l = 1, r = n, mid = (l+r)/2,d=0;
        while(l<=r){
            if(k<a[mid]) r = mid-1;
            else if(k>a[mid]) l = mid+1;
            else{
                d = 1;
                break;
            }
            mid = (l+r)/2;
        }
        if(d==0) cout<<"NO"<<endl;
        else cout<<mid<<endl;
    }
}