#include <bits/stdc++.h>
using namespace std;
struct dt{
    int s,e;
};
bool cmp(dt a,dt b){
    return a.e<b.e;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        dt x[n];
        for(int i=0;i<n;i++){
            cin>>x[i].s;
            cin>>x[i].e;
        }
        sort(x,x+n,cmp);
        int dem=1,tmp=0,i=1;
        while(i<n){
            if(x[i].s>=x[tmp].e){
                tmp = i;
                dem++;
            }
            i++;
        }
        cout<<dem<<endl;
    }
}