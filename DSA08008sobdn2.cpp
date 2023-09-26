//so nho nhat chia het cho n gom 1 va 0
#include <bits/stdc++.h>
using namespace std;
string bdn(int n){
    queue<string> q;
    q.push("1");
    while(!q.empty()){
        string tmp = q.front(); q.pop();
        long long s=0;
        for(int i=0;i<tmp.size();i++){
            s = s*10 + tmp[i]-'0';
            s = s%n;
        }
        if(s==0) return tmp;
        q.push(tmp+"0");
        q.push(tmp+"1");
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<bdn(n)<<endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s; cin>>s;
//     long long n=0;
//     for(int i=0;i<s.size();i++){
//         n = n*10 + s[i]-'0';
//         n=n%17;
//         cout<<n<<" ";
//     }
// }