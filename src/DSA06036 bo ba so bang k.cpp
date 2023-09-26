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
        int d = 0;
        for(int i=0;i<n-2;i++){
            int l = i+1, r = n-1;
            while(l<r){
                int sum = a[i] + a[l] + a[r];
                if(sum==k){
                    cout<<"YES"<<endl;
                    d = 1;
                    break;
                }
                else if(sum>k){
                    r--;
                }
                else{
                    l++;
                }
            }
            if(d==1) break;
        }
        if(d==0) cout<<"NO"<<endl;
    }
}