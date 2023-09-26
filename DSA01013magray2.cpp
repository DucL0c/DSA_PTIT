#include <bits/stdc++.h>
using namespace std;
int n,a[1000],ok;
string x;
void in(){
	string s="";
	s += to_string(a[1]);
	int d = 0;
	for(int i=2;i<=n;i++){
		s += to_string(a[i]^a[i-1]);
		if(s==x){
			d = 1;
		}
	}
	if(d==1){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		ok = 1;
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		if(ok==0){
			a[i]=j;
			if(i==n){
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
		cin>>x;
		n = x.length();
		ok=0;
		Try(1);
		cout<<endl;
	}
}
