#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        priority_queue<int,vector<int>,greater<int> > pq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            pq.push(a[i]);
        }
        long long sum=0;
        while(pq.size()){
            int l = pq.top(); pq.pop();
            int r = pq.top(); pq.pop();
            long long s = l+r;
            sum += s;
            if(pq.size()==0) break;
            pq.push(s);
        }
        cout<<sum<<endl;
    }
}