#include <bits/stdc++.h>
using namespace std;
int n,x,k,b[100],a[100];
vector< vector<int> > v;
void in(){
    vector<int> v1;
    for(int i=1;i<=k;i++){
        v1.push_back(a[i]);
    }
    v.push_back(v1);
}
void Try(int i,int s){
    for(int j = 1;j<=n;j++){
        if(b[j]>=a[i-1] && s+b[j]<=x){
            a[i] = b[j];
            s = s + b[j];
            if(s==x){
                k = i;
                in();
            }
            else{
                Try(i+1,s);
            }
            s = s - b[j];
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        v.clear();
        cin>>n>>x;
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        a[0]=0;
        Try(1,0);
        int z = v.size();
        if(z==0) cout<<-1<<endl;
        else{
            cout<<v.size()<<" ";
            for(int i=0;i<v.size();i++){
                cout<<"{";
                for(int j=0;j<v[i].size()-1;j++){
                    cout<<v[i][j]<<" ";
                }
                cout<<v[i][v[i].size()-1]<<"}"<<" ";
            }
            cout<<endl;
        }
        
    }
}