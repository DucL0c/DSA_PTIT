#include <bits/stdc++.h>
using namespace std;
int n,a[101];
int sum,d;
void Try(int i,int s){
    if(s==sum/2){
        d = 1;
        return;
    }
    if(d==1) return;
    for(int j=i;j<=n;j++)
        if(s+a[j]<=sum/2)
            Try(i+1,s+a[j]);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        sum=0; d=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum +=a[i];
        }
        if(sum%2!=0) cout<<"NO"<<endl;
        else{
            Try(1,0);
            if(d==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}