#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long s=0;
    for(int i=0;i<n;i++){
        s += abs(a[i]) + a[i];
    }
    cout<<s<<endl;
}