#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cin.ignore();
        string s; getline(cin,s);
        stringstream ss(s);
        vector<string> v;
        string tmp;
        while(ss>>tmp){
            v.push_back(tmp);
        }
        queue<int> q;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]=="+" || v[i]=="-" || v[i]=="*" || v[i]=="/"){
                int se = q.front(); q.pop();
                int fi = q.front(); q.pop();
                int ans=0;
                if(v[i]=="+") ans = fi+se;
                else if(v[i]=="-") ans = fi-se;
                else if(v[i]=="*") ans = fi*se;
                else if(v[i]=="/") ans = fi/se;
                q.push(ans);
            }
            else q.push(stoi(v[i]));
        }
        cout<<q.front()<<endl;
    }
}