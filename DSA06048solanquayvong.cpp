#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        int min = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<a[min]) min = i;
        }
        cout<<min<<endl;
    }
}