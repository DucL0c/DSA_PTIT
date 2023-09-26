#include <bits/stdc++.h>
using namespace std;
int a[100005],b[100005],c[100005];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        stack<int> st;
        for(int i=n;i>=1;i--){
            while(!st.empty() && a[i]>=a[st.top()]) st.pop();
            if(st.empty()) b[i] = -1;
            else b[i] = st.top();
            st.push(i); 
        }
        stack<int> st1;
        for(int i=n;i>=1;i--){
            while(!st1.empty() && a[i]<=a[st1.top()]) st1.pop();
            if(st1.empty()) c[i] = -1;
            else c[i] = st1.top();
            st1.push(i); 
        }
        for(int i=1;i<=n;i++){
            if(b[i] != -1 and c[b[i]] != -1) cout << a[c[b[i]]] << ' ';
            else cout << -1 << ' ';
        }
        cout<<endl;
    }
}