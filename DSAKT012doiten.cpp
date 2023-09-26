#include <bits/stdc++.h>
using namespace std;
int n,k,s,a[31],b[31],d=1;
void in(){
	int sum=0;
	for(int i=1;i<=k;i++){
		sum += b[a[i]];
	}
	if(sum==s){
		d=0;
		cout<<k<<endl;
	}
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		if(d==1){
			a[i]=j;
			if(i==k){
				in();
			}
			else{
				Try(i+1);
			}
		}
	}
}
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		k=i;
		a[0]=0;
		Try(1);
	}
	if(d==1) cout<<"-1"<<endl;
}
