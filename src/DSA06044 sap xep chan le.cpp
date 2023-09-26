#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int> v1,v2;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i%2==0) v1.push_back(a[i]);
        else v2.push_back(a[i]);
    }
    sort(v2.begin(),v2.end());
    sort(v1.begin(),v1.end(),greater<int>());
    if(n%2==0){
    	for(int i=0;i<n/2;i++){
    		cout<<v2[i]<<" "<<v1[i]<<" ";
		}
	}
	else{
		for(int i=0;i<n/2;i++){
    		cout<<v2[i]<<" "<<v1[i]<<" ";
		}
		int x = n/2;
		cout<<v2[x];
	}
}
