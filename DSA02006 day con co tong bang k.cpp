#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000],b[1000];
vector< vector<int> > v;
void in(){
    int s = 0;
    for(int i=1;i<=n;i++){
        if(a[i]==1){
            s += b[i];
        }
    }
    if(s==k){
        vector<int> v1;
        for(int i=1;i<=n;i++){
            if(a[i]==1){
                v1.push_back(b[i]);
            }
        }
        sort(v1.begin(),v1.end());
        v.push_back(v1);
    }
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            in();
        }
        else{
            Try(i+1);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        v.clear();
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        Try(1);
        if(v.size()==0){
            cout<<-1;
        }
        else{
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++){
                cout<<"[";
                for(int j=0;j<v[i].size()-1;j++){
                    cout<<v[i][j]<<" ";
                }
                cout<<v[i][v[i].size()-1]<<"]";
                if(i!=v.size()-1){
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}