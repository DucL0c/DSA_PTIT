#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        stack<int> st;
        for(int i=1;i<=n+1;i++){
            if(s[i-1]=='D'){
                st.push(i);
            }
            else{
                cout<<i;
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
            }
        }
        cout<<endl;
    }
}