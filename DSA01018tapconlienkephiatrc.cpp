#include <bits/stdc++.h>
using namespace std;
int n,k,a[1005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		int i=k;
		while(i>0 && a[i]==a[i-1]+1){
			i--;
		}
		if(i==0 && a[1]==1){
			for(int j=1;j<=k;j++){
				cout<<n-k+j<<" ";
			}
		}
		else if(i==0 && a[1]!=1){
			a[i+1]--;
			for(int j=i+2;j<=k;j++){
				a[j] = n-k+j;
			}
			for(int j=1;j<=k;j++){
				cout<<a[j]<<" ";
			}
		}
		else{
			a[i]--;
			for(int j=i+1;j<=k;j++){
				a[j] = n-k+j;
			}
			for(int j=1;j<=k;j++){
				cout<<a[j]<<" ";
			}
		}
		cout<<endl;
	}
}
