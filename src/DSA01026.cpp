#include <bits/stdc++.h>
using namespace std;
int n,a[100];
void in(){
    if(a[1]==0 && a[n]==1){
        int c1=1,c2=1;
        for(int i=1;i<=n-1;i++){
            if(a[i]==a[i+1] && a[i]==0){
                c1=0;
                break;
            }
        }
        for(int i=1;i<=n-3;i++){
            if(a[i]==a[i+1] && a[i]==a[i+2] && a[i] == a[i+3] && a[i]==1){
                c2=0;
                break;
            }
        }
        if(c1==1 && c2==1){
            for(int i=1;i<=n;i++){
                if(a[i]==0){
                    cout<<"8";
                }
                else{
                    cout<<"6";
                }   
            }
            cout<<endl;
        }
    }
}
void Try(int i){
    for(int j=1;j>=0;j--){
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