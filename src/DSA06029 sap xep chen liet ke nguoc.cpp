#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector< vector<int> > v;
    for(int i=1;i<n;i++){
        vector<int> v1;
        for(int j=0;j<i;j++){
            v1.push_back(a[j]);
        }
        v.push_back(v1);
        int key=a[i];
        int j = i-1;
        while(j>=0 && key<a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    cout<<"Buoc "<<n-1<<": ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=v.size()-1;i>=0;i--){
        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}