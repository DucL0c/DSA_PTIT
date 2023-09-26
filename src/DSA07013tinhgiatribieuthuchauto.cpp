#include <bits/stdc++.h>
using namespace std;
void solve(string s){
    int n = s.length();
    stack<int> st;
    for(int i=0;i<n;i++){
        if(isdigit(s[i])){
            st.push(s[i]-'0');
        }
        else{
            int fi = st.top(); st.pop();
            int se = st.top(); st.pop();
            int x = 0;
            if(s[i]=='*') x = fi*se;
            else if(s[i]=='+') x  = fi+se;
            else if(s[i]=='-') x  = se-fi;
            else if(s[i]=='/') x  = se/fi;
            st.push(x);
        }
    }
    int x = st.top();
    cout<<x<<endl;
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