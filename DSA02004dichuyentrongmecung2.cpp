#include <bits/stdc++.h>
using namespace std;
int n,a[9][9];
bool check[9][9];
string s;
int dem;
void in(){
    dem++;
    cout<<s<<" ";
}
void Try(int i,int j){
    if(i==n && j==n) in();
    if(i<n && a[i+1][j] == 1 && check[i+1][j]==true){
        s += "D";
        check[i+1][j]=false;
        Try(i+1,j);
        s.erase(s.length()-1);
        check[i+1][j]=true;
    }
    if(j>1 && a[i][j-1] == 1 && check[i][j-1]==true){
        s += "L";
        check[i][j-1]=false;
        Try(i,j-1);
        s.erase(s.length()-1);
        check[i][j-1]=true;
    }
    if(j<n && a[i][j+1] == 1 && check[i][j+1]==true){
        s += "R";
        check[i][j+1]=false;
        Try(i,j+1);
        s.erase(s.length()-1);
        check[i][j+1]=true;

    }
    if(i>1 && a[i-1][j] == 1 && check[i-1][j]==true){
        s += "U";
        check[i-1][j]=false;
        Try(i-1,j);
        s.erase(s.length()-1);
        check[i-1][j]=true;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        s="";
        dem=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        if(a[1][1]==0) cout<<-1<<endl;
        else{
            memset(check,true,sizeof(check));
            a[1][1]=0;
            Try(1,1);
            if(dem==0) cout<<-1;
            cout<<endl;
        }
        
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// int n,a[9][9];
// bool check[9][9];
// string s;
// int dem;
// void in(){
//     dem++;
//     cout<<s<<" ";
// }
// void Try(int i,int j){
//     if(i==n && j==n) in();
//     check[i][j]=false;
//     if(i<n && a[i+1][j] == 1 && check[i+1][j]==true){
//         s += "D";
//         Try(i+1,j);
//         s.erase(s.length()-1);
//     }
//     if(j>1 && a[i][j-1] == 1 && check[i][j-1]==true){
//         s += "L";
//         check[i][j-1]=false;
//         Try(i,j-1);
//         s.erase(s.length()-1);
//     }
//     if(j<n && a[i][j+1] == 1 && check[i][j+1]==true){
//         s += "R";
//         Try(i,j+1);
//         s.erase(s.length()-1);

//     }
//     if(i>1 && a[i-1][j] == 1 && check[i-1][j]==true){
//         s += "U";
//         Try(i-1,j);
//         s.erase(s.length()-1);
//     }
//     check[i][j]=true;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         s="";
//         dem=0;
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n;j++){
//                 cin>>a[i][j];
//             }
//         }
//         if(a[1][1]==0) cout<<-1<<endl;
//         else{
//             memset(check,true,sizeof(check));
//             Try(1,1);
//             if(dem==0) cout<<-1;
//             cout<<endl;
//         }
        
//     }
// }