#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[100005],m[100005]={0};
        for(int i=1;i<=n;i++) cin>>a[i];
        int res=-1;
        m[n] = a[n];
        for(int i=n-1;i>=1;i--) m[i] = max(m[i+1],a[i]);
        int i=1,j=1;
        while(i<=n && j<=n){
            if(m[j]>a[i]){
                res = max(res,j-i);
                j++;
            }
            else i++;
        }
        cout<<res<<endl;
    }
}