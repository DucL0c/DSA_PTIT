#include <bits/stdc++.h>
using namespace std;
int n,k,a[16],b[16];
int dem;
void in(){
	int d=1;
	for(int i=1;i<k;i++){
		if(b[a[i]]>b[a[i+1]]){
			d=0;
			break;
		}
	}
	if(d==1){
		dem++;
	}
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
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
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	a[0]=0;
	Try(1);
	cout<<dem;
}
