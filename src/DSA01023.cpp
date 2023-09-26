#include <bits/stdc++.h>
using namespace std;
int n,k,a[100],b[100];
vector<vector<int>> v;
void in(){
    vector<int> v1;
    for(int i=1;i<=k;i++){
        v1.push_back(a[i]);
    }
    v.push_back(v1);
}
void Try(int i){
    for(int j = a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
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
        vector<int> v2;
        for(int i=1;i<=k;i++){
            cin>>b[i];
            v2.push_back(b[i]);
        }
        a[0]=0;
        Try(1);
        int dem=0;
        for(int i=0;i<v.size();i++){
            int cnt=1;
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]!=v2[j]){
                    cnt = 0;
                    break;
                }

            }
            if(cnt==0){
                dem++;
            }
            else{
                dem++;
                break;
            }
        }
        cout<<dem<<endl;
    }
}