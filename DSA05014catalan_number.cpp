#include <bits/stdc++.h>
using namespace std;
string sum(string a, string b){
    while(a.length()<b.length()) a = "0" + a;
    while(a.length()>b.length()) b = "0" + b;
    int nho=0;
    string res="";
    for(int i=a.length()-1;i>=0;i--){
        int so = a[i]-'0' + b[i]-'0' + nho;
        res = char(so%10+'0') + res;
        nho = so/10;
    }
    if(nho>0) res = char(nho+'0') + res;
    return res;
}
string mul(string a, string b){
    int len = a.length()+b.length();
    vector< vector<int> > res(b.length());
    vector<int> c,d;
    for(int i=0;i<a.length();i++) c.push_back(a[i]-'0');
    for(int i=0;i<b.length();i++) d.push_back(b[i]-'0');
    int index=0;
    for(int i=b.length()-1;i>=0;i--){
        int t = 0;
        while(t<index){
            res[i].push_back(0);
            t++;
        }
        int nho=0;
        for(int j=a.length()-1;j>=0;j--){
            int so = d[i]*c[j] + nho;
            res[i].push_back(so%10);
            nho = so/10;
        }
        if(nho>0) res[i].push_back(nho);
        while(res[i].size()<len) res[i].push_back(0);
        reverse(res[i].begin(),res[i].end());
        index++;
    }
    int tmp=0;
    string ans="";
    for(int i=res[0].size()-1;i>=0;i--){
        int so=tmp;
        for(int j=b.length()-1;j>=0;j--){
            so += res[j][i];
        }
        ans = char(so%10+'0') + ans;
        tmp = so/10;
    }
    if(tmp>0) ans = char(tmp+'0') + ans;
    while(ans[0]=='0') ans.erase(ans.begin());
    return ans;
}
string a[105];
void solve(){
    a[0]="1";
    a[1]="1";
    for(int i=2;i<=100;i++){
        string tmp="";
        for(int j=0;j<i;j++){
            tmp = sum(tmp,mul(a[j],a[i-j-1]));
        }
        a[i]=tmp;
    }
}
int main(){
    int t;
    cin>>t;
    solve();
    while(t--){
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }
}