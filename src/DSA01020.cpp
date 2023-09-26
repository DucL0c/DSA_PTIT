#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int check=1;
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                check = 0;
                break;
            }
        }
        if(check == 0){
            for(int i=s.length()-1;i>=0;i--){
                if(s[i]=='1'){
                    s[i] = '0';
                    for(int j=i+1;j<s.length();j++){
                        s[j] = '1';
                    }
                    break;
                }
            }
            for(int i=0;i<s.length();i++){
                cout<<s[i];
            }
            cout<<endl;
        }
        else{
            for(int i=0;i<s.length();i++){
                cout<<"1";
            }
            cout<<endl;  
        }
    }
}