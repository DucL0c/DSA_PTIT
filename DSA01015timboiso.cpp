#include <bits/stdc++.h>
using namespace std;
int n,a[20],ok;
void in(){
	long long x=0;
	for(int i=1;i<=13;i++){
		if(a[i]==0){
			x = x*10 + 0;
		}
		else{
			x = x*10 + 9;
		}
	}
	if(x%n==0 && x>=n){
		cout<<x;
		ok=1;
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		if(ok==0){
			a[i]=j;
			if(i==13){
				in();
			}
			else{
				Try(i+1);
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ok = 0;
		cin>>n;
		Try(1);
		cout<<endl;
	}
}
