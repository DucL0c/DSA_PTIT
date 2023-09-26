#include <bits/stdc++.h>
using namespace std;
int binary_Search(long long a[],int n,double x,int j){
    int l = j, r = n, mid = (l+r)/2;
    while(l<=r){
        if(x>a[mid]){
            l = mid + 1;
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
        int n;
        cin>>n;
        long long a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        int d=0;
        for(int i=1;i<=n-2;i++){   // 1 2 3 4 5
            for(int j=i+1;j<=n-1;j++){
                long long c = (long long)(a[i]*a[i]+a[j]*a[j]);
                double x = (double)sqrt((long long)c);
                if(binary_Search(a,n,x,j+1)!=-1){
                    cout<<"YES"<<endl;
                    d = 1;
                    break;
                }
            }
            if(d==1) break;
        }
        if(d==0) cout<<"NO"<<endl;
    }
}