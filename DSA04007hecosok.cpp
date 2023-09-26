#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        string a,b;
        cin>>k>>a>>b;
        while(a.size()<b.size()) a = '0' + a;
        while(b.size()<a.size()) b = '0' + b; 
        int nho=0;
        string res="";
        for(int i=a.size()-1;i>=0;i--){
            int t = int(a[i]-'0') + int(b[i]-'0') +  nho;
            nho = t/k;
            res = char(t%k+'0') + res;
        }
        if(nho>0) res = char(nho+'0') + res;
        cout<<res<<endl;
    }
}