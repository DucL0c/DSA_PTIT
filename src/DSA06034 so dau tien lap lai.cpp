#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> m;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        m.clear();
        int d = 0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            m[a[i]]++;
        }
        for(int i=0;i<n;i++){
        	if(m[a[i]]>1){
        		cout<<a[i]<<endl;
        		d = 1;
        		break;
			}
		}
        if(d==0) cout<<"NO"<<endl;
    }
    return 0;
}
