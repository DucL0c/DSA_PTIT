#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    stack<int> st;
    while(cin>>s){
        int n;
        if(s=="push"){
            cin>>n;
            st.push(n);
        }
        else if(s=="pop"){
            if(st.size()==0){
                cout<<"empty"<<endl;
                break;
            }
            else st.pop();
        }
        else{
            vector<int> v;
            if(st.size()==0) cout<<"empty"<<endl;
            else{
                while(st.size()){
                    int x = st.top(); st.pop();
                    v.push_back(x);
                }
                 for(int i=v.size()-1;i>=0;i--){
                    cout<<v[i]<<" ";
                    st.push(v[i]);
                }
                cout<<endl;
            }
        }
    }
}