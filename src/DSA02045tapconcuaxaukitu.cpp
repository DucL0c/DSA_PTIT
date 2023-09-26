#include <bits/stdc++.h>
using namespace std;
int n,k,a[17];
char b[17];
vector<string> v;
void in(){
	string s="";
	for(int i=1;i<=k;i++){
		s += b[a[i]];
	}
	v.push_back(s);
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
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		v.clear();
		for(int i=1;i<=n;i++){
			cin>>b[i];
		}
		for(int i=1;i<=n;i++){
			k=i;
			a[0]=0;
			Try(1);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}
