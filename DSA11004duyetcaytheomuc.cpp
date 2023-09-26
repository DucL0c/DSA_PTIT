#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int infor;
    struct node *left;
    struct node *right;
}*tree;
tree make_node(int x){
    tree p;
    p = new node;
    p->infor = x;
    p->left = p->right = NULL;
    return p;
}
void insert(tree T,int u,int v,char x){
    if(T==NULL) return;
    if(T->infor == u){
        if(x=='L') T->left = make_node(v);
        else if(x=='R') T-> right = make_node(v);
    }
    else{
        insert(T->left,u,v,x);
        insert(T->right,u,v,x);
    }
}
void level_order(tree T){
    queue<tree> q;
    q.push(T);
    while(!q.empty()){
        tree p = q.front(); q.pop();
        cout<<p->infor<<" ";
        if(p->left!=NULL) q.push(p->left);
        if(p->right!=NULL) q.push(p->right);
    }
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
                else if(x=='R') T-> right = make_node(v);
            }
            else insert(T,u,v,x);
        }
        level_order(T);
        cout<<endl;
    }
}