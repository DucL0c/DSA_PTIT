#include <bits/stdc++.h>
using namespace std;
int n,a[100];
void in(){
    int check = 1;
    for(int i=1,j=n;i<j;i++,j--){
        if(a[i]!=a[j]){
            check = 0;
            break;
        }
    }
    if(check==1){
       for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
       } 
       cout<<endl;
    }
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            in();
        }
        else{
            Try(i+1);
        }
    }
}
int main(){
    cin>>n;
    Try(1);
}