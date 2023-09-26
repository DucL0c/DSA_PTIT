#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<int> q;
        for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            if(a==1) cout<<q.size()<<endl;
            else if(a==2){
                if(q.empty()) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else if(a==3){
                int x; cin>>x; q.push(x);
            }
            else if(a==4){
                if(!q.empty()) q.pop();
            }
            else if(a==5){
                if(!q.empty()) cout<<q.front()<<endl;
                else cout<<-1<<endl;
            }
            else{
                if(!q.empty()) cout<<q.back()<<endl;
                else cout<<-1<<endl;
            }
        }
    }
}