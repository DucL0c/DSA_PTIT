#include <bits/stdc++.h>
using namespace std;
int n,p,m;
int a[100];
bool checkNT[1000000];
long long s;
vector<int> v;
vector< vector<int> > v1;
void sieve(){
    memset(checkNT,true,sizeof(checkNT));
    checkNT[0]=false;
    checkNT[1]=false;
    for(int i=2;i<=sqrt(1000000);i++)
        for(int j=i*i;j<=1000000;j+=i)
            checkNT[j]=false;
}
void in(){
    long long sum = 0;
    for(int i=1;i<=n;i++){
        sum += v[a[i]-1];
    }
    if(sum==s){
        vector<int> v2;
        for(int i=1;i<=n;i++){
            v2.push_back(v[a[i]-1]);
        }
        v1.push_back(v2);
    }
}
void Try(int i){
    for(int j = a[i-1]+1;j<=m-n+i;j++){
        a[i]=j;
        if(i==n) in();
        else Try(i+1);
    }
}
int main(){
    sieve();
    int t;
    cin>>t;
    while(t--){
        cin>>n>>p>>s;
        v.clear();
        v1.clear();
        for(int i=p+1;i<s;i++)
            if(checkNT[i])
                v.push_back(i);
        m  = v.size();
        a[0]=0;
        Try(1);
        cout<<v1.size()<<endl;
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v1[i].size();j++){
                cout<<v1[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}