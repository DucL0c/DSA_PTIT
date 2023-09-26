#include<bits/stdc++.h>
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
int depth(tree T){
    if(T==NULL) return -1;
    return max(depth(T->left),depth(T->right))+1;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        tree T =  NULL;
        while(n--){
            int x; cin>>x;
            insert(T,x);
        }
        cout<<depth(T)<<endl; 
    }
}