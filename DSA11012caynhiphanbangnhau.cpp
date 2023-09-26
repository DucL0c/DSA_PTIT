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
void insert(tree T,int u,int v,char x){
    if(T==NULL) return;
    if(T->data == u){
        if(x=='L') T->left = make_node(v);
        else T->right = make_node(v);
    }
    else{
        insert(T->left,u,v,x);
        insert(T->right,u,v,x);
    }
}
string level_order(tree T){
    queue<tree> q;
    q.push(T);
    string s="";
    while(!q.empty()){
        tree p = q.front(); q.pop();
        s += p->data + '0';
        if(p->left!=NULL) q.push(p->left);
        if(p->right!=NULL) q.push(p->right);
    }
    return s;
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
                else T->right = make_node(v);
            }
            else insert(T,u,v,x);
        }
        int m; cin>>m;
        tree t = NULL;
        while(m--){
            int u,v; char x;
            cin>>u>>v>>x;
            if(t==NULL){
                t = make_node(u);
                if(x=='L') t->left = make_node(v);
                else t->right = make_node(v);
            }
            else insert(t,u,v,x);
        }
        //cout<<level_order(T)<<" "<<level_order(t)<<endl;
        if(level_order(T)==level_order(t)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}