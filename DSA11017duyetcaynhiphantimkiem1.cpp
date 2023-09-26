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
    if(T->data>x) 
        insert(T->left,x);
    else if(T->data<x)
        insert(T->right,x);
}
void post_order(tree T){
    if(T==NULL) return;
    if(T->left!=NULL) 
        post_order(T->left);
    if(T->right!=NULL) 
        post_order(T->right);
    cout<<T->data<<" ";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t,x,n;
    cin>>t;
    while(t--){
        cin>>n;
        tree T = NULL;
        while(n--){
            cin>>x;
            insert(T,x);
        }
        post_order(T);
        cout<<endl;
    }
}