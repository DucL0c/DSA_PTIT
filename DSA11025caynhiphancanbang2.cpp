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
tree insert(int a[],int start,int end){
    if(start>end) return NULL;
    int mid = (start + end)/2;
    tree T = make_node(a[mid]);
    T->left = insert(a,start,mid-1);
    T->right = insert(a,mid+1,end);
    return T;
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
        int a[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        tree T = insert(a,0,n-1);
        pre_order(T);
        cout<<endl;
    }
}