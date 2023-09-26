#include <bits/stdc++.h>
using namespace std;
long long a[100005],b[100005];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n-1;i++) cin>>b[i];
        for(int i=1;i<=n;i++){
            if(a[i]!=b[i]){
                cout<<i<<endl;
                break;
            }
        }
    }
}