#include <bits/stdc++.h>
using namespace std;
int n,k,a[10000];
vector<vector<int> > v;
void in(){
    vector<int> v1;
    for(int i=1;i<=k;i++){
        //cout<<a[i];
        v1.push_back(a[i]);
    }
    //cout<<endl;
    v.push_back(v1);
}
void Try(int i){ 
    for(int j=a[i-1];j<=n;j++){
        a[i]=j;
        if(i==k){
            in();
        }
        else{
            Try(i+1);
        }
    }
}
int main(){
    char c;
    cin>>c>>k;
    n = int(c)-64;
    a[0]=1;
    Try(1);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<char(64+v[i][j]);
        }
        cout<<endl;
    } 
}