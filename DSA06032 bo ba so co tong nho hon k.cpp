#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long dem = 0;
        for(int i=0;i<n-2;i++){
            int l = i+1,r=n-1;
            while(l<r){
                if((long long)(a[i]+a[l]+a[r]) < k){
                    dem += (r-l);
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        cout<<dem<<endl;
    }
    
}