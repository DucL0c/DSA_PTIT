#include <bits/stdc++.h>
using namespace std;
int n,a[1000];
bool check[1000];
void in(){
	int d=1;
	for(int i=1;i<=n-1;i++){
		if(a[i]+1==a[i+1] || a[i]-1==a[i+1]){
			d=0;
			break;
		}
	}
	if(d==1){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<endl;	
	}
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(check[j]==true){
			a[i]=j;
			check[j]=false;
			if(i==n){
				in();
			}
			else{
				Try(i+1);
			}
			check[j]=true;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		memset(check,true,sizeof(check));
		Try(1);
	}
}
