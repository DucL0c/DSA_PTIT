#include <bits/stdc++.h>
using namespace std;
int n,a[100001],b[100001],oke=1;
void in(){
    for(int i=1;i<=n;i++){
        a[i] = i;
    }
}
void sinh(){
    int i=n-1;
    while(i>=1 && a[i]>a[i+1]){
        i--;
    }
    if(i==0){
        oke = 0;
    }
    else{
        int k = n;
        while(a[i]>a[k]){
            k--;
        }
        swap(a[i],a[k]);
        int l=i+1,r=n;
        while(l<r){
            swap(a[l],a[r]);
            l++,r--;
        }
    }
}
void output(){
    for(int i=1;i<=n;i++){
        cout<<b[a[i]]<<" ";
    }
    cout<<endl;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    sort(b,b+n);
    in();
    while(oke!=0){
        output();
        sinh();
    }
}