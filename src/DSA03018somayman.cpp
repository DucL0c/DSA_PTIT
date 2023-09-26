#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s="";
        if(n<9){
            if(n==4||n==7) cout<<n<<endl;
            else if(n==8) cout<<44<<endl;
            else cout<<-1<<endl;
        }
        else{
            int x=0;
            while(n>7){
                if(n<28 && n%4==0){
                    x = n/4;
                    break;
                }
                n-=7;
                s += '7';
            }
            if(x==0){
                if(n==4){
                    s = '4' + s;
                    cout<<s;
                }
                else if(n==7){
                    s = '7' + s;
                    cout<<s;
                } 
                else cout<<-1;
            }
            else{
                for(int i=1;i<=x;i++) s = '4' + s;
                    cout<<s;
            }
            cout<<endl;
        }
    }
}
// 4   4
// 7   7
// 8   44
// 11  47
// 12  444
// 14  77
// 15  447
// 16  4444
// 43   4477777 4444444447
// 23   44447   977
// 27   444447  6777
// 29   44777   44777
// 30   444477  9777
// 47   44444444447 44477777