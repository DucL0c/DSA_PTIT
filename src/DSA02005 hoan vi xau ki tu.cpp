#include <bits/stdc++.h>
using namespace std;
int a[1000],check[1000];
vector<int> v;
void in(){
    for(int i=1;i<=v.size();i++){
        cout<<char(64+a[i]);
    }
    cout<<" ";
}
void Try(int i){
    for(int j=1;j<=v.size();j++){
        if(check[j]){
            a[i]=j;
            check[j]=false;
            if(i==v.size()){
                in();
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
        v.clear();
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            v.push_back(int(s[i]));
        }
        memset(check,true,sizeof(check));
        Try(1);
        cout<<endl;
    }
}