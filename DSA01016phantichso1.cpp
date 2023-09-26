#include <bits/stdc++.h>
using namespace std;
int n,k,a[11],ok;
void init(){
	k=1;
	a[k]=n;
}
void sinh(){
	int i = k;
	while(i>=1 && a[i]==1){
		i--;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]--;
		int d = k-i+1;
		int q = d/a[i],  r = d%a[i];
		k=i;
		if(q!=0){
			for(int j=1;j<=q;j++){
				a[i+j] = a[i];
			}
			k += q;
		}
		if(r!=0){
			a[k+1]=r;
			k++;
		}
	}
}
void in(){
	cout<<"(";
	for(int i=1;i<k;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[k]<<")"<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ok=1;
		cin>>n;
		init();
		while(ok){
			in();
			sinh();
		}
		cout<<endl;
	}
}
