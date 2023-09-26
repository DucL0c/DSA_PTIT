#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        long long a=0,b=0,c=1;
        for(int i=s1.size()-1;i>=0;i--){
            a += int(s1[i]-'0')*c;
            c*=2;
        }
        c=1;
        for(int i=s2.size()-1;i>=0;i--){
            b += int(s2[i]-'0')*c;
            c*=2;
        }
        cout<<a*b<<endl;
    }
}