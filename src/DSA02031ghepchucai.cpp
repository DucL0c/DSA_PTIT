#include <bits/stdc++.h>
using namespace std;
int n,a[10],check[10];
void in(){
    int d=1;
    for(int i=2;i<=n-1;i++){
        if((a[i]==1) && (a[i-1]!=5&&a[i+1]!=5))
            d=0;
        else if(a[i]==5&& (a[i-1]!=1&&a[i+1]!=1))
            d=0;
    }
    if(d==1){
        for(int i=1;i<=n;i++){
            cout<<char(64+a[i]);
        }
        cout<<endl;
    }
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(check[j]){
            a[i]=j;
            check[j]=false;
            if(i==n){
                in();
            }
            else{
                Try(i+1);
            }
            check[j]=true;
        }
    }
}
int main(){
    char c;
    cin>>c;
    n = int(c)-64;
    memset(check,true,sizeof(check));
    Try(1);
}



// #include <bits/stdc++.h>
// #define endl "\n"
// using namespace std;
// int n, a[100];
// bool check()
// {
//     for (int i = 2; i <= n - 1; i++)
//         if ((a[i] == 1 || a[i] == 5) &&
//             (a[i - 1] != 1 && a[i - 1] != 5) &&
//             (a[i + 1] != 1 && a[i + 1] != 5))
//             return 0;
//     return 1;
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     char c;
//     cin >> c;
//     n = c - 'A' + 1;
//     for (int i = 1; i <= n; i++)
//         a[i] = i;
//     while (1)
//     {
//         if (check())
//         {
//             for (int i = 1; i <= n; i++)
//                 cout << (char)(a[i] + 'A' - 1);
//             cout << endl;
//         }
//         int ok = 0;
//         for (int i = n - 1; i >= 1; i--)
//         {
//             if (a[i] < a[i + 1])
//             {
//                 ok = 1;
//                 sort(a + i + 1, a + n + 1);
//                 for (int j = i + 1; j <= n; j++)
//                 {
//                     if (a[j] > a[i])
//                     {
//                         swap(a[i], a[j]);
//                         break;
//                     }
//                 }
//                 break;
//             }
//         }
//         if (ok == 0)
//             break;
//     }
// }