#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
vector<string> v;
void in(){
    string s="";
    int dem=0;//AAABA
    for(int i=1;i<=n-k+1;i++){
        int t = 1;
        for(int j=i+1;j<i+k;j++){
            if(a[i]==a[j] && a[i]==0){
                continue;
            }
            else{
                t = 0;
                break;
            }
        }
        if(t==1) dem++;
    }
    if(dem==1){
        for(int i=1;i<=n;i++){
            if(a[i]==0) s +=  'A';
            else s+='B';
        }
        v.push_back(s);
    }
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n) in();
        else Try(i+1);
    }
}
int main(){
    cin>>n>>k;
    Try(1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}