#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
typedef struct Node* node;
node make_node (int x){
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
void insertLast(node &a,int x){
    node tmp = make_node(x);
    if(a == NULL){
        a = tmp;
    }
    else{
        node p = a;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = tmp;
    }
}
void in(node a){
    int b[100]={0};
    while(a!=NULL){
        b[a->data]++;
        if(b[a->data]==1)
            cout<<a->data<<" ";
        a = a->next;
    }
}
int main(){
    int n;
    cin>>n;
    node head = NULL;
    while(n--){
        int x;
        cin>>x;
        insertLast(head,x);
    }
    in(head);
}