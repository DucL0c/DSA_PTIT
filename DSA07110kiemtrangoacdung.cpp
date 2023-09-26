#include <bits/stdc++.h>
using namespace std;
void solve(string s){
    int n = s.length();
    stack<char> st;
    for(int i=0;i<n;i++){
        //if(st.empty()) st.push(s[i]);
        /*else */if(s[i]=='[' || s[i]=='(' /*|| s[i]=='{'*/){
            st.push(s[i]);
        }
        else{
            if(s[i]==']' && st.top()=='[') st.pop();
            else if(s[i]==')' && st.top()=='(') st.pop();
            //else if(s[i]=='}' && st.top()=='{') st.pop();
        }
    }
    if(st.size()==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        getline(cin,s);
        // string x="";
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='(' || s[i]==')' || s[i]=='[' || s[i]==']'){
        //         x+=s[i];
        //     }
        // }
        solve(s);
    }
}