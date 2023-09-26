#include <bits/stdc++.h>
using namespace std;
int n,Max;
int a[9],b[10][10],c[9],xuOi[15],ngUOC[15];
void init(){
    for(int i=1;i<=8;i++) c[i] = 1;
    for(int i=1;i<=2*8-1;i++){
        xuOi[i] = 1;
        ngUOC[i] = 1;
    }
}
void in(){
    int s = 0;
    for(int i=1;i<=8;i++){
        s += b[i][a[i]];
    }
    if(s>Max) Max = s;
}
void Try(int i){
    for(int j=1;j<=8;j++){
        if(c[j]==1 && xuOi[i-j+8]==1 && ngUOC[i+j-1]==1){
            a[i] = j;
            c[j]=0; xuOi[i-j+8]=0; ngUOC[i+j-1]=0;
            if(i==8) in();
            else Try(i+1);
            c[j]=1; xuOi[i-j+8]=1; ngUOC[i+j-1]=1;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Max = -10e8;
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                cin>>b[i][j];
            }
        }
        init();
        Try(1);
        cout<<Max<<endl;
    }
}