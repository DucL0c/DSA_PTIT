#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    queue<string> q;
    q.push("6");
    q.push("8");
    vector<string> v;
    while(!q.empty()){
        string tmp = q.front(); q.pop();
        v.push_back(tmp);
        if(tmp.size()<n){
            q.push(tmp+"6");
            q.push(tmp+"8");
        }
        else break;
    }
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    cout<<v.size()<<endl;
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        solve(n);
    }
}