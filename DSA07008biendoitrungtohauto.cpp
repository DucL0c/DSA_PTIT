#include <bits/stdc++.h>
using namespace std;
int uutien(char x){
    if(x=='^') return 5;
    if(x=='*' || x=='/') return 4;
    if (x=='+' || x=='-') return 3;
    return 2;
}
void solve(string s){
    int n = s.length();
    stack<char> st;
    string ans = "";
    for(int i=0;i<n;i++){
        if(isalpha(s[i])) ans += s[i];
        else if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                char tmp = st.top(); st.pop();
                ans += tmp;
            }
            if(st.top()=='(') st.pop();
        }
        else{
            while(!st.empty() && uutien(s[i])<=uutien(st.top())){
                char x = st.top(); st.pop();
                ans += x;
            }
            st.push(s[i]);
        }
    }
    while(st.size()!=0 && st.top()!='('){
        ans += st.top(); st.pop();
    }
    cout<<ans<<endl;
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