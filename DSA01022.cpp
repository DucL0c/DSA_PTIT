#include <bits/stdc++.h>
using namespace std;
int n,a[100],b[100];
bool check[100];
int oke,dem;
void in(){
    int cnt=1;
    for(int i=1;i<=n;i++){
        if(a[i]!=b[i]){
            cnt=0;
            break;
        }
    }
    if(cnt==0) dem++;
    else{
        oke = 0;
        dem++;
    }
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(check[j]==true){
            a[i]=j;
            check[j]=false;
            if(i==n){
                in();
                if(oke == 0){
                    break;
                }
            }
            else{
                Try(i+1);
            }
            check[j]=true;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        dem = 0,oke=1;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        memset(check,true,sizeof(check));
        Try(1);
        cout<<dem<<endl;
    }
}