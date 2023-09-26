#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int d=2;
        int n = s.length();
        int a[26]={0};
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }
        int maX = -10e6;
        for(int i=0;i<n;i++){
            if(a[s[i]-'a']>maX){
                maX = a[s[i]-'a'];
            }
        }
        if((maX-1)*d<n) cout<<1<<endl;
        else cout<<-1<<endl;
    }
}