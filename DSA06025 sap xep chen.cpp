#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=0;
    for(int i=1;i<n;i++){
        int key = a[i];   
        int j=i-1;
        cout<<"Buoc "<<j<<": ";
        for(int k=0;k<i;k++){
            cout<<a[k]<<" ";
        }
        cout<<endl;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j]; 
            j--;
        }
        a[j+1] = key;
        x++;
    }
    cout<<"Buoc "<<x<<": ";
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}