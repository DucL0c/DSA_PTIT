#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long l=0,r=0;
        for(int i=0;i<n;i++){
            if(i%2==0) l = l*10 + a[i];
            else r = r*10+a[i];
        }
        cout<<(long long)r+l<<endl;
    }
}