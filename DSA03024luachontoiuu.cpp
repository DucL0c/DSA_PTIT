#include <bits/stdc++.h>
using namespace std;
struct cv{
    int s,f;
};
bool cmp(cv a,cv b){
    return a.f<b.f;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cv x[n];
        for(int i=0;i<n;i++){
            cin>>x[i].s;
            cin>>x[i].f;
        }
        sort(x,x+n,cmp);
        int tmp=0,i=1,dem=1;
        while(i<n){
            if(x[i].s>=x[tmp].f){
                tmp = i;
                dem++;
            }
            i++;
        }
        cout<<dem<<endl;
    }
}