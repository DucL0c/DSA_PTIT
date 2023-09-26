#include <bits/stdc++.h>
using namespace std;
struct data{
    int x,y;
};
bool cmp(data a,data b){
    return a.y<b.y;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        data a[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i].x>>a[i].y;
        }
        sort(a,a+n,cmp);
        int dem=1,j=0;
        for(int i=1;i<n;i++){
            if(a[i].x>a[j].y){
                dem++;
                j = i;
            }
        }
        cout<<dem<<endl;
    }
}