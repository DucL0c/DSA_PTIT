#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}*tree;
inline tree make_node(int x){
    tree p = new node;
    p -> data = x;
    p -> left = p -> right = NULL;
    return p;
}
inline void insert(tree T,int u,int v,char x){
    if(T==NULL) return;
    if(T->data == u){
        if(x=='L') T -> left = make_node(v);
        else if(x=='R') T -> right = make_node(v);
    }
    else{
        insert(T->left,u,v,x);
        insert(T->right,u,v,x);
    }
}
bool same_level(tree T){
    queue<tree> q;
    q.push(T);
    int s=0,l=0;
    while(!q.empty()){
        int s = q.size(); 
        if(s!=pow(2,l)) return false;
        for(int i=1;i<=s;i++){
            tree p = q.front(); q.pop();
            if(p->left!=NULL) q.push(p->left);
            if(p->right!=NULL) q.push(p->right);
        }
        l++;
    }
    return true;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        tree T = NULL;
        while(n--){
            int u,v; char x;  // tat ca cac node deu co muc d
            cin>>u>>v>>x;
            if(T==NULL){
                T = make_node(u);
                if(x=='L') T -> left = make_node(v);
                else if(x=='R') T -> right = make_node(v);
            }
            else insert(T,u,v,x);
        }
        if(same_level(T)==true) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}