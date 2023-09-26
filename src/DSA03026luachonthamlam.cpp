#include <bits/stdc++.h>
using namespace std;

int main(){
	int t=1;
	//cin>>t;
	while(t--){
        int n,s;
        cin>>n>>s;
        string Max="",Min="";
        if(9*n<s || s==0) cout<<"-1 -1"<<endl;
        else if(n==1){
            if(s<10) cout<<s<<" "<<s<<endl;
            else cout<<-1<<" "<<-1<<endl;
        }
        else if(n>=2){
            if(s<10){
                Min += '1';
                n-=2;
                while(n){
                    Min +='0';
                    Max +='0';
                    n--;
                }
                Min += to_string(s-1);
                Max = to_string(s) + '0' + Max;
                cout<<Min<<" "<<Max<<endl;
            }
            else{
                while(s>9){
                    Min += '9';
                    Max += '9';
                    s-=9;
                    n--;
                }
                if(n==1){
                    Max += to_string(s);
                    Min = to_string(s) + Min;
                    cout<<Min<<" "<<Max<<endl;
                }
                else{
                    n-=2;
                    Min = to_string(s-1) + Min;
                    Max += to_string(s) + '0';
                    while(n){
                        Min = '0' + Min;
                        Max += '0';
                        n--;
                    }
                    Min = '1' + Min;
                    cout<<Min<<" "<<Max<<endl;
                }
                
            }
        }
	}
}
