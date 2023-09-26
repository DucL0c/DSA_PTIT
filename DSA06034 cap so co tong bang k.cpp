#include <bits/stdc++.h>
using namespace std;
int b[1000];
int binary_search(int a[],int n,int x){
    int l = 0, r=n-1, mid = (r+l)/2;
    while(l<=r){
        if(x>a[mid]){
            l = mid+1;
        }
        else if(x<a[mid]){
            r = mid-1;
        }
        else{
            return mid;
        }
        mid = (r+l)/2;
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int dem = 0;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            int t = binary_search(a,n,k-a[i]);
        }
        cout<<dem<<endl;
    }
}