#include <bits/stdc++.h>
using namespace std;
inline bool check(string s){
    int cnt = 0;
    for(char &i : s){
        cnt += i == '2';
    }
    return cnt > (s.size()>>1);
}
int main(){
    queue<string> q;
    q.push("1");
    q.push("2");
    vector<string> res;
    string top;
    while(res.size()<105){
        top = q.front();
        q.pop();
        if(check(top)) res.push_back(top);
        for(char i='0';i<=2;i++) q.push(top+i);
    }
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}
