#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        int dem=0;
        if(n<m || (n*6-m*6)<m) cout<<-1<<endl;
        else{
            int x = s*m;//do an can thiet trong s ngay
            while(x>0){
                dem++;
                x -= n;
            }
            cout<<dem<<endl;
        }
    }
}