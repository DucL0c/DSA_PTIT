#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5];
        for(int i=1;i<=n;i++) cin>>a[i];
        int tmp,tmp1 = a[1], tmp2 = a[2], tmp3 = a[1]+a[3];
        for(int i = 4;i<=n;i++){
            tmp = a[i];
            if(tmp1>tmp2) tmp+=tmp1;
            else tmp += tmp2;
            tmp1=tmp2;
            tmp2=tmp3;
            tmp3=tmp;
        }
        cout<<max(tmp2,tmp3)<<endl;
    }
}