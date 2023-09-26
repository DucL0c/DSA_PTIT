#include <bits/stdc++.h>
using namespace std;
void solve(string s){
    int n = s.length();
    stack<int> st;
    st.push(-1);
    int res=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='(') st.push(i);
        else{
            st.pop();
            if(st.empty()) st.push(i);
            else res = max(res,(i-st.top()));
        }
    }
    cout<<res<<endl;
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