#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000];
vector<string> v;
set<string> s;
void in(){
    for(int i=1;i<=k;i++){
        cout<<v[a[i]-1]<<" ";
    }
    cout<<endl;
}
void Try(int i){
    for(int j=a[i-1]+1;j<=v.size()-k+i;j++){
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
    cin>>n>>k;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        s.insert(str);
    }
    set<string>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        v.push_back(*it);
    }
    a[0]=0;
    Try(1);
}