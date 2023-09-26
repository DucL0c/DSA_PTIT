#include <bits/stdc++.h>
using namespace std;
int n,a[100],dem=0 ,d=0;
queue<int> q;
void in(){
    int c=1;
    for(int i=1;i<=15;i++){
        q.push(a[i]);
    }
    while(!q.empty() && q.front()==0) q.pop();
    while(!q.empty()){
        cout<<q.front();
        q.pop();
        c=0;
    }
    if(c==0) cout<<" ";
    dem++;
    if(dem==n+1) d=1;
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==15){
            if(d==1) break;
            else in();
        }
        else Try(i+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        dem=0;d=0;
        Try(1);
        cout<<endl;
    }
}