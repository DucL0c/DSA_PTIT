#include <bits/stdc++.h>
using namespace std;
int n,k,a[100],check[100];
int dem=0;
void in(){
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(check[i]==1){
            sum += a[i];
        }
    }
    if(sum == k){
        for(int i=1;i<=n;i++){
            if(check[i]==1){
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
        dem++;
    }
}
void Try(int i){
    for(int j=0;j<=1;j++){
        check[i]=j;
        if(i==n){
            in();
        }
        else{
            Try(i+1);
        }
    }
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    Try(1);
    cout<<dem;
}   