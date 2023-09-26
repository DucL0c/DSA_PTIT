#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5],b[n+5];
        for(int i=1;i<=n;i++) cin>>a[i];
        stack<int> st;
        a[0]=0;
        st.push(0);
        for(int i=1;i<=n;i++){
            while(st.size()>1 && a[i]>=a[st.top()]) st.pop();
            b[i] = i - st.top();
            st.push(i);
        }
        for(int i=1;i<=n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}