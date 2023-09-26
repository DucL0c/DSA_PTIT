#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        priority_queue<int> pq;
        int k; string s;
        cin>>k>>s;
        int b[26]={0};
        int n=s.length();
        for(int i=0;i<n;i++){
            b[(s[i])-'A']++;
        }
        for(int i=0;i<26;i++)
            if(b[i]!=0)
                pq.push(b[i]);
        long long sum=0;
        while(k>0){
            int x = pq.top(); pq.pop();
            x--;
            pq.push(x);
            k--;
        }
        while(pq.size()){
            long long x = pq.top();
            sum += (long long)x*x;
            pq.pop();
        }
        cout<<(long long)sum<<endl;
    }
}