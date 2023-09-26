#include <bits/stdc++.h>
using namespace std;
int Max(int a,int b,int c){
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else if(c>a && c>b) return c;
}
int maxSub(int a[],int l,int m,int r){
    int sum = 0,left_SUM = INT_MIN, right_SUM = INT_MIN;
    for(int i=m;i>=1;i--){
        sum+=a[i];
        if(sum>left_SUM) left_SUM = sum;
    }
    sum=0;
    for(int i=m+1;i<=r;i++){
        sum+=a[i];
        if(sum>right_SUM) right_SUM = sum;
    }
    return right_SUM+left_SUM;
}
int Try(int a[],int l,int r){
    if(l==r) return a[l];
    int m = (r+l)/2;
    return Max(Try(a,l,m),Try(a,m+1,r),maxSub(a,l,m,r));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        cout<<Try(a,1,n)<<endl;
    }
}