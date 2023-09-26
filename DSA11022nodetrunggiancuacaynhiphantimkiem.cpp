#include <bits/stdc++.h>
using namespace std;
vector<int> v;
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
void node_trung_gian(tree T){
    if(T!=NULL){
        if(T->left!=NULL || T->right!=NULL){
            v.push_back(T->data);
        }
        if(T->left!=NULL) node_trung_gian(T->left);
        if(T->right!=NULL) node_trung_gian(T->right);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        v.clear();
        int n; cin>>n;
        tree T = NULL;
        while(n--){
            int x; cin>>x;
            insert(T,x);
        }
        node_trung_gian(T);
        cout<<v.size()<<endl;
    }
}