#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int dem=0;
        for(int i=0;i<n-1;i++){
            int min = i,t;
            int d = 0;
            for(int j=i+1;j<n;j++){
                if(a[min]>a[j]){
                    min = j;
                    d = 1;
                }
            }
            t = a[i];
            a[i] = a[min];
            a[min] = t;
            if(d==1) dem++;
        }
        cout<<dem<<endl;
    }
}