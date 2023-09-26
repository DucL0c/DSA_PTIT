#include <bits/stdc++.h>
using namespace std;
int Min;
string s;
void in(){
	if(s.length()<Min){
		Min = s.length();
	}
	//cout<<s<<endl;
}
void Try(int n){
	if(n==1) in();
	if(n%2==0){
		s += n/2+'0';
		if(s.length()<Min)
		Try(n/2);
		s.erase(s.length()-1);
	}
	if(n%3==0){
		s+= n/3+'0';
		if(s.length()<Min)
		Try(n/3);
		s.erase(s.length()-1);	
	}
	if(n>1){
		s += n-1+'0';
		if(s.length()<Min)
		Try(n-1);
		s.erase(s.length()-1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		Min=10e8;
		s="";
		int n;
		cin>>n;
		Try(n);
		cout<<Min<<endl;
	}
}
