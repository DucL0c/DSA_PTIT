#include <bits/stdc++.h>
using namespace std;
int maX(string s1){
    int s = 0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='5') s = s*10 + 6;
        else s = s*10 + s1[i]-'0';
    }
    return s;
}
int miN(string s1){
    int s = 0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='6') s = s*10 + 5;
        else s = s*10 + s1[i]-'0';
    }
    return s;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<(long long)miN(s1)+miN(s2)<<" "<<(long long)maX(s1)+maX(s2);
}