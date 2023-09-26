#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}*tree;
tree make_node(int x){
    tree p = new node;
    p->data = x;
    p->left = p->right = NULL;
    return p;
}
void insert(tree &T,int x){
    if(T==NULL){
        T = make_node(x);
    }
    else{
        if(T->data>x) insert(T->left,x);
        else insert(T->right,x);
    }
    
}
void pre_order(tree T){
    if(T!=NULL){
        cout<<T->data<<" ";
        if(T->left!=NULL) pre_order(T->left);
        if(T->right!=NULL) pre_order(T->right);
    }
    
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        tree T = NULL;
        while(n--){
            int x; cin>>x;
            insert(T,x);
        }
        pre_order(T);
        cout<<endl;
    }
}