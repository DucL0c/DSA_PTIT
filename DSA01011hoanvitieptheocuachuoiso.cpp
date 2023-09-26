#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		char a[100];
		for(int i=0;i<s.length();i++){
			a[i] = s[i];
		}
		int d=0;
		for(int i=0;i<s.length()-1;i++){
			if(a[i]<a[i+1]){
				d=1;
			}
		}
		next_permutation(a,a+s.length());
		cout<<n<<" ";
		if(d==0){
			cout<<"BIGGEST";
		}
		else{
			for(int i=0;i<s.length();i++){
				cout<<a[i];
			}
		}
		cout<<endl;
	}
}
