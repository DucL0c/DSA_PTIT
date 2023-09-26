#include <bits/stdc++.h>
using namespace std;
long long a[100005];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==1) cout<<a[0]<<endl;
        else if(n==2) cout<<max(a[0],a[1])<<endl;
        else{
            long long tmp, tmp1 = a[0], tmp2 = a[1], tmp3 = a[0]+a[2];
            for(int i=3;i<n;i++){
                tmp = a[i];
                if(tmp1>tmp2) tmp += tmp1;
                else tmp +=tmp2;
                tmp1 = tmp2;
                tmp2 = tmp3;
                tmp3 = tmp;
            }
            cout<<max(tmp2,tmp3)<<endl;
        }
        
    }
}