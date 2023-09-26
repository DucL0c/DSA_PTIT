#include <bits/stdc++.h>
using namespace std;
int b[1000]={0};
bool cmp(int a,int c){
	if(b[a]==b[c]) return a<c;
	return b[a]>b[c];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        memset(b,0,sizeof(b));
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        sort(a,a+n,cmp); 
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
