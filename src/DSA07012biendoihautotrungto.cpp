#include <bits/stdc++.h>
using namespace std;
void solve(string s){
    int n = s.length();
    stack<string> st;
    for(int i=0;i<n;i++){
        if(!isalpha(s[i])){
            string fi = st.top(); st.pop();
            string se = st.top(); st.pop();
            string tmp = "(" + se + s[i] + fi + "   )";
            st.push(tmp);
        }
        else st.push(string(1,s[i]));
    }
    cout<<st.top()<<endl; 
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