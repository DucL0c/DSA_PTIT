#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		string s;
		cin>>k>>s;
		int n=s.length();
		for(int i=0;i<k && i<n;i++){
			int max = i;
			for(int j=n-1;j>i;j--){
				if(s[j]>s[max]){
					max = j;
				}
			}
			if(max!=i) swap(s[i],s[max]);
			else k++;	
		}
		cout<<s<<endl;
	}
}

