#include <bits/stdc++.h>
using namespace std;
int n,k,s,a[11];
int dem;
void in(){
	int sum=0;
	for(int i=1;i<=k;i++){
		sum += a[i];
	}
	if(sum==s){
		dem++;
		return;
	}
}
void Try(int i){
	for(int j = a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			in();
		}
		else{
			Try(i+1);
		}
	}
}
int main(){
	while(true){
		cin>>n>>k>>s;
		if(n==0 && k==0 && s==0){
			break;
		}
		dem=0;
		a[0]=0;
		Try(1);
		cout<<dem<<endl;
	}
}
