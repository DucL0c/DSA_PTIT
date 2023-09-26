#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int d = 1;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                d = 0;
            }
        }
        if(d==0){
            cout<<"Buoc "<<i+1<<": ";
            for(int j=0;j<n;j++){
                cout<<a[j]<<" ";
            }
            cout<<endl;
        }
    }
}