#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v[100];
    cin.ignore();
    string s;
    for(int i=1;i<=n;i++){
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        while(ss>>tmp){
            v[i].push_back(stoi(tmp));
        }
    }
    for(int i=1;i<=n;i++) sort(v[i].begin(),v[i].end());
    int d[100][100];
    memset(d,0,sizeof(d));
    for(int i=1;i<=n;i++){
        for(int j=0;j<v[i].size();j++){
            if(d[i][v[i][j]]==0 && d[v[i][j]][i]==0)
                cout<<i<<" "<<v[i][j]<<endl;
            d[i][v[i][j]]=1; d[v[i][j]][i]=1;
        }
    }
}
