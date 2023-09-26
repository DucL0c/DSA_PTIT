#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[10]={1,2,5,10,20,50,100,200,500,1000};
        int j = 9;
        int dem=0;
        while(n){
            if(a[j]<=n){
                dem++;
                n-=a[j];
            }
            else{
                j--;
            }
        }
        cout<<dem<<endl;
    }
}