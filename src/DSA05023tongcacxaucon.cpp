#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<int> v;
        while(n){
            int x = n%10;
            v.push_back(x);
            n =n/10;
        }
        reverse(v.begin(),v.end());
        long long res=0;
        for(int i=0;i<v.size();i++){
            long long tmp=0;
            for(int j=i;j<v.size();j++){
                tmp = tmp*10 + v[j];
                res = res + tmp;
            }
        }
        cout<<res<<endl;
    }
}