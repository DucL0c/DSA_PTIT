#include <bits/stdc++.h>
using namespace std;
int n;
long long a[1000005],x;
void solve(int n,long long x){
    int l = 1, r = n, mid  = (l+r)/2;
    while(l<=r){
        if(x<a[mid]) r = mid-1;
        else l = mid + 1;
        mid = (l+r)/2;
    }
    cout<<mid<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        if(x<a[1]) cout<<-1<<endl;
        else solve(n,x);
    }
}