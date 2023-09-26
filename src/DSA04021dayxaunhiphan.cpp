#include <bits/stdc++.h>
using namespace std;
long long F[93];
void solve(){
	long long n, i;
	cin >> n >> i;
	while(n>2){
		if(i <= F[n-2]) n-=2;
		else{
			i -=F[n-2];
			n-=1;
		}
	}
	if(n==1) cout <<"0\n";
	else cout <<"1\n";
}
int main(){
	F[1] = 1;
	F[2] = 1;
	for(int i = 3; i<=92; i++){
		F[i] = F[i-2] + F[i-1];
	}
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// #include <bits/stdc++.h>
// using namespace std;
// long long f[93];
// long long Try(long long n, long long k){
//     if(n==1) return 0;
//     if(n==2) return 1;
//     if(k<=f[n-2]) Try(n-2,k);
//     else Try(n-1,k-f[n-2]);
// }
// void init(){
//     long long n,k;
//     cin>>n>>k;
//     cout<<Try(n,k)<<endl;
// }
// int main(){
//     int t;
//     cin>>t;
//     f[1]=1,f[2]=1;
//     for(int i=3;i<=92;i++) f[i] = f[i-2]+f[i-1];
//     while(t--){
//         init();
//     }
//     return 0;
// }
