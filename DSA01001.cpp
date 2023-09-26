#include <bits/stdc++.h>
using namespace std;
void solve(string &s){
    int n = s.length()-1;
    int dem=0;
    for(int i=0;i<=n;i++){
        if(s[i]=='0'){
            dem++;
        }
    }
    if(dem==0){
        for(int i=0;i<=n;i++){
            cout<<'0';
        }
        cout<<endl;
    }
    else{
        while(n!=0){
            if(s[n]=='1'){
                n--;
            }
            else{
                s[n] = '1';
                for(int j=n+1;j<s.length();j++){
                    s[j] = '0';
                }
                break;
            }
        }
        cout<<s<<endl;
    }
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