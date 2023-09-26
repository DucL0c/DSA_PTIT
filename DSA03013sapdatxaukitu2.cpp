#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        string s;
        cin>>d>>s;
        int n = s.length();
        int a[26]={0};
        for(int i=0;i<n;i++){
            a[s[i]-'A']++;
        }
        int maX = -10e6;
        for(int i=0;i<n;i++){
            if(a[s[i]-'A']>maX){
                maX = a[s[i]-'A'];
            }
        }
        if((maX-1)*d<n) cout<<1<<endl;
        else cout<<-1<<endl;
    }
}