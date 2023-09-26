#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,n;
        cin>>s>>n;
        string x="";
        if(9*n<s) cout<<-1<<endl;
        else if(s>9){
            while(s>9){
                x = '9' + x;
                s = s-9;
                n--;
            }
            if(n==1){
                x = to_string(s) + x;
                cout<<x<<endl;
            }
            else{
                n-=2;
                x = to_string(s-1) + x;
                while(n>0){
                    x = '0' + x;
                    n--;
                }
                x = '1' + x;
                cout<<x<<endl;
            }
            
        }
        else{
            if(n==1) cout<<s<<endl;
            else if(n==2){
                x += '1';
                x+= to_string(s-1);
                cout<<x<<endl;
            }
            else{
                x += '1';
                n-=2;
                while(n>0){
                    x += '0';
                    n--;
                }
                x += to_string(s-1);
                cout<<x<<endl;
            }
        }
    }
}
// 1 1 -> 1
// 2 1 -> 2
// 1 3 -> 100
// 2 3 -> 101
// 3 3 -> 102
// 3 1 -> 3
