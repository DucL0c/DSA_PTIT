#include <bits/stdc++.h>
using namespace std;
bool checkNT(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d = 0;
        for(int i=2;i<=n/2;i++){
            if(checkNT(i) && checkNT(n-i)){
                d = 1;
                cout<<i<<" "<<n-i<<endl;
                break;
            }
        }
        if(d==0) cout<<-1<<endl;
    }   
}