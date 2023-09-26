#include <bits/stdc++.h>
using namespace std;
int n,k,a[100];
void in(){
    int dem = 0;
    for(int i=1;i<n;i++){
        if(a[i] == a[i+1]  && a[i] == 1){
            dem=1;
            break;
        }
    }
    if(a[1]==1 && a[n]==0 && dem==0){
        for(int i=1;i<=n;i++){
            if(a[i]==1) cout<<"H";
            else cout<<"A";
        }
        cout<<endl;
    }
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i] = j;
        if(i==n){
            in();
        }
        else{
            Try(i+1);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        Try(1);
        cout<<endl;
    }
}