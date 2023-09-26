#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        while(ss>>tmp){
            int x = stoi(tmp);
            a[i][x]=a[x][i]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==1) cout<<"1"<<" ";
            else cout<<"0"<<" ";
        }
        cout<<endl;
    }
}