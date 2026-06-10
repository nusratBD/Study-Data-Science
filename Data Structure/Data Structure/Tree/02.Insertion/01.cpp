#include<iostream>
using namespace std;
struct Node{
int data;
Node *left, *right;
};
Node *root=NULL;
void insertion(int value){
Node *newNode=new Node();
newNode->data=value;
newNode->left=NULL;
newNode->right=NULL;
if(root==NULL){
    root=newNode;
}
else{
    Node *current=root;
    Node *parent=root;
    while(current!=NULL){
        if(value<current->data){
            parent=current;
            current=current->left;
        }
        else{
            parent=current;
            current=current->right;
        }
    }
    if(value<parent->data){
        parent->left=newNode;
    }
    else{
        parent->right=newNode;
    }
}
}
int main(){

}
