#include <bits/stdc++.h>
using namespace std;
int n,a[11],k;
vector< vector<int> > v;
void in(){
	vector<int> v1;
	for(int i=1;i<=k;i++){
		v1.push_back(a[i]);
	}
	v.push_back(v1);
}
void quaylui(int n,int i,int s){
	for(int j=n;j>=1;j--){
		a[i]=j;
		if(j==s){
			k=i;
			in();
		}
		else if(j<s) quaylui(j,i+1,s-j);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		v.clear();
		quaylui(n,1,n);
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++){
			cout<<"(";
			for(int j=0;j<v[i].size()-1;j++){
				cout<<v[i][j]<<" ";
			}
			cout<<v[i][v[i].size()-1]<<")"<<" ";
		}
		cout<<endl;
	}
}
