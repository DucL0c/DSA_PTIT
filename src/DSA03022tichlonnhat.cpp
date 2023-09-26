#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    long long m1 = a[0]*a[1]*a[2];
    long long m2 = a[n-1]*a[n-2]*a[n-3];
    long long m3 = a[0]*a[1];
    long long m4 = a[n-1]*a[n-2];
    long long m5 = a[n-1]*a[n-2]*a[0];
    long long m6 = a[0]*a[1]*a[n-1];
    long long m = max(m1,m2);
    long long k = max(m3,m4);
    long long l = max(m5,m6);
    long long z = max(m,k);
    cout<<(long long)max(z,l)<<endl;
}