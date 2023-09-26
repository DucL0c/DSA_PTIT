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
        return;
    }
    if(T->data>x) insert(T->left,x);
    else insert(T->right,x);
}
void node_la(tree T){
    if(T!=NULL){
        if(T->left==NULL && T->right==NULL){
            cout<<T->data<<" ";
            return;
        }
        if(T->left!=NULL) node_la(T->left);
        if(T->right!=NULL) node_la(T->right);
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
        node_la(T);
        cout<<endl;
    }
}