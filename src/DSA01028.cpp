#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000],b[1000];
vector<int> v;
void in(){
    for(int i=1;i<=k;i++){
        cout<<v[a[i]-1]<<" ";
    }
    cout<<endl;
}
void Try(int i){
    for(int j= a[i-1]+1;j<=v.size()-k+i;j++){
        a[i] = j;
        if(i==k){
            in();
        }
        else{
            Try(i+1);
        }
    }
}
int main(){
    cin>>n>>k;
    int c[1000]={0};
    for(int i=0;i<n;i++){
        cin>>b[i];
        c[b[i]]++;
        if(c[b[i]]==1)
            v.push_back(b[i]);
    }
    sort(v.begin(),v.end());
    a[0]=0;
    Try(1);
}