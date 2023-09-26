#include <bits/stdc++.h>
using namespace std;
long long n;
int k,a[10];
bool check[10];
vector<string> v;
long long M = 10e9;
void in(){
    long long miN = 10e9, maX = -10e9;
    for(int i=0;i<n;i++){
        long long sum=0;
        for(int j=1;j<=k;j++){
            sum = sum*10 + v[i][a[j]-1]-'0';
            //cout<<v[i][a[j]-1]-'0'<<" ";
        }
        if(sum>maX) maX  = sum;
        if(sum<miN) miN = sum;
    }
    if(maX-miN<M) M = maX-miN;
    //cout<<endl;
}
void Try(int i){
    for(int j=1;j<=k;j++){
        if(check[j]==true){
            a[i]=j;
            check[j]=false;
            if(i==k) in();
            else Try(i+1);
            check[j]=true;
        }
    }
}
int main(){
    cin>>n>>k;
    string s;
    for(int i=1;i<=n;i++){
        cin>>s;
        v.push_back(s);
    }
    memset(check,true,sizeof(check));
    Try(1);
    cout<<M<<endl;
}
