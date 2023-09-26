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
    if(T->data==u){
        if(x=='L') T->left = make_node(v);
        else T->right = make_node(v);
    }
    else{
        insert(T->left,u,v,x);
        insert(T->right,u,v,x);
    }
}
bool is_perfect(tree T){
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
            int u,v; char x;
            cin>>u>>v>>x;
            if(T==NULL){
                T = make_node(u);
                if(x=='L') T->left = make_node(v);
                else T->right = make_node(v);
            }
            else insert(T,u,v,x);
        }
        if(is_perfect(T)==true) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}