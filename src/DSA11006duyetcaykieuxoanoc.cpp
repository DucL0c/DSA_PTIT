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
void spiral_order(tree T){
    queue<tree> q;
    q.push(T);
    cout<<T->data<<" ";
    int x = 0;
    while(!q.empty()){
        vector<tree> v;
        int n = q.size();
        x++;
        for(int i=1;i<=n;i++){
            tree p = q.front(); q.pop();
            if(p->left!=NULL){
                v.push_back(p->left);
                q.push(p->left);
            }
            if(p->right!=NULL){
                v.push_back(p->right);
                q.push(p->right);
            }
        }
        if(x%2==0) reverse(v.begin(),v.end());
        for(tree i:v){
            cout<<i->data<<" ";
        }
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
                else T->right = make_node(v);
            }
            else insert(T,u,v,x);
        }
        spiral_order(T);
        cout<<endl;
    }
}