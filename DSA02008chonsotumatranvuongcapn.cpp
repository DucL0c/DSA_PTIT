#include <bits/stdc++.h>
using namespace std;
int n,k,a[11],b[11][11];
bool check[11];
vector< vector<int> > v;
void in(){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=b[i][a[i]];
    }
    if(sum==k){
        vector<int> v1;
        for(int i=1;i<=n;i++){
            v1.push_back(a[i]);
        }
        v.push_back(v1);
    }
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(check[j]==true){
            a[i]=j;
            check[j]=false;
            if(i==n) in();
            else Try(i+1);
            check[j]=true;
        }
    }
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>b[i][j];
    memset(check,true,sizeof(check));
    Try(1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}