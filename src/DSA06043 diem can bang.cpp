#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        int tmp=0,d=0;
        for(int i=1;i<n;i++){
            tmp += a[i-1];
            if(s-tmp-a[i]==tmp){
                cout<<i+1<<endl;
                d=1;
                break;
            }
        }
        if(d==0){
            cout<<-1<<endl;
        }
    }
}