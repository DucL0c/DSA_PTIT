#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}*tree;
inline tree make_node(int x){
    tree p = new node;
    p->data = x;
    p->left = p->right = NULL;
    return p;
}
inline void insert(tree T,int u,int v,char x){
    if(T==NULL) return;
    if(T->data == u){
        if(x=='L') T->left = make_node(v);
        else T->right= make_node(v);
    }
    else{
        insert(T->left,u,v,x);
        insert(T->right,u,v,x);
    }
}
bool is_Full(tree T){
    if(T==NULL) return true;
    if(T->left==NULL && T->right==NULL) return true;
    tree p = T->left;
    tree q = T->right;
    if(p!=NULL && q!=NULL){
        if(is_Full(p) && is_Full(q)){
            return true;
        }
    }
    return false;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        tree T = NULL;
        while(n--){
            int u,v; char x;
            cin>>u>>v>>x;
            if(T==NULL){
                T = make_node(u);
                if(x=='L') T->left = make_node(v);
                else T->right= make_node(v);
            }
            else insert(T,u,v,x);
        }
        if(is_Full(T)==true) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}