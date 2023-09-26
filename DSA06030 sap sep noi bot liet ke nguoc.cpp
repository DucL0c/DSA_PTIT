#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector< vector<int> > v;
        for(int i=0;i<n;i++){
            int d = 0;
            vector<int> v1;
            for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    d = 1;
                }
            }
            if(d==1){
                for(int j=0;j<n;j++){
                    v1.push_back(a[j]);
                }
                v.push_back(v1);
            }
        }
        for(int i=v.size()-1;i>=0;i--){
            cout<<"Buoc "<<i+1<<": ";
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}