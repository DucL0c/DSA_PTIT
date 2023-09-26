#include <bits/stdc++.h>
using namespace std;
int n,k,a[100000],b[100000];
vector<string> v;
void in(){
    string str=to_string(b[a[1]]);
    int d = 1;
    for(int i=2;i<=k;i++){
        if(b[a[i]]<b[a[i-1]]){
            d = 0;
            break;
        }
        else{
            str += " " + to_string(b[a[i]]);
        }
    }
    if(d==1) v.push_back(str);
}
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
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
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    for(int i=2;i<=n;i++){
        k = i;
        a[0]=0;
        Try(1);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
