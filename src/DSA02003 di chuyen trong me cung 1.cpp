#include <bits/stdc++.h>
using namespace std;
int n,a[11][11],ok;
string s;
void Try(int i,int j){
	if(i==n && j==n){
		cout<<s<<" ";
		ok = 1;
		return;
	}
	if(a[i+1][j]==1){
		s += "D";
		Try(i+1,j);
		s.erase(s.length()-1);
	}
	if(a[i][j+1]==1){
		s += "R";
		Try(i,j+1);
		s.erase(s.length()-1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		s="";
		ok = 0;
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		if(a[1][1]==0){
			cout<<-1<<endl;
			continue;
		}
		Try(1,1);
		if(ok==0) cout<<-1;
		cout<<endl;
	}
}
