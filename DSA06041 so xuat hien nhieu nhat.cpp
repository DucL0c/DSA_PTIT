#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[100005]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        int max = 0,x;
        for(int i=0;i<n;i++){
            if(b[a[i]]>max){
                max = b[a[i]];
                x = i;
            }
        }
        if(max>n/2) cout<<a[x]<<endl;
        else cout<<"NO"<<endl;
    }
}