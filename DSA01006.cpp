#include <bits/stdc++.h>
using namespace std;
int n,a[100];
bool check[100];
void in(){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<" ";
}
void Try(int i){
    for(int j=n;j>=1;j--){
        if(check[j]==true){
            a[i]=j;
            check[j] = false;
            if(i==n){
                in();
            }
            else{
                Try(i+1);
            }
            check[j] = true;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        memset(check,true,sizeof(check));
        Try(1);
        cout<<endl;
    }
}