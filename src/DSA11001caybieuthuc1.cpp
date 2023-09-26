#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    char data;
    struct node *left;
    struct node *right;
}*tree;
inline tree make_node(char x){
    tree p; p = new node;
    p->data = x;
    p->left = p->right = NULL;
    return p;
}
inline void level_order(tree T){
    if(T!=NULL){
        level_order(T->left);
        cout<<T->data;
        level_order(T->right);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        stack<tree> st;
        for(int i=0;i<s.length();i++){
            if(!isalpha(s[i])){
                tree p = make_node(s[i]);
                p -> right = st.top(); st.pop();
                p -> left = st.top(); st.pop();
                st.push(p);
            }
            else st.push(make_node(s[i]));
        }
        level_order(st.top());
        cout<<endl;
    }
}


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t; cin>>t;
//     while(t--){
//         string s; cin>>s;
//         stack<string> st;
//         string ans="";
//         for(int i=0;i<s.length();i++){
//             if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
//                 string se = st.top(); st.pop();
//                 string fi = st.top(); st.pop();
//                 ans = fi + " " + s[i] + " " + se;
//                 st.push(ans);
//             }
//             else st.push(string(1,s[i]));
//         }
//         cout<<st.top()<<endl;
//     }
// }