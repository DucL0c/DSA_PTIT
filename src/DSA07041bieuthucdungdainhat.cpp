#include <bits/stdc++.h>
using namespace std;
void solve(string s){
    int n = s.length();
    stack<int> st;
    int dem=0;
    for(int i=0;i<n;i++){
        if(st.empty() || s[i]=='(') st.push(s[i]);
        else if(st.top()=='('){
            dem+=2;
            st.pop();
        }
    }
    cout<<dem<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        solve(s);
    }
}