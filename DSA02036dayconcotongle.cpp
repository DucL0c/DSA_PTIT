#include <bits/stdc++.h>
using namespace std;
int n,k,a[16],b[16];
vector< vector<int> > v;
void in(){
	int sum = 0;
	vector<int> v1;
	for(int i=1;i<=k;i++){
		sum += b[a[i]];
	}
	if(sum%2!=0){
		for(int i=1;i<=k;i++){
			v1.push_back(b[a[i]]);
		}
		sort(v1.begin(),v1.end(),greater<int>());
		v.push_back(v1);
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
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		v.clear();
		for(int i=1;i<=n;i++){
			cin>>b[i];
		}
		for(int i=1;i<=n;i++){
			k = i;
			a[0]=0;
			Try(1);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v[i].size();j++){
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
