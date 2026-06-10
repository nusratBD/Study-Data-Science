//Dynamic tree creation & node insertion
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};
Node *root=NULL;
void insertNode(int value)
{
    Node *newNode=new Node();
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    if(root==NULL)
    {
        root=newNode;
    }
    else
    {
        Node *parent=root;
        Node *current=NULL;
        while(parent!=NULL)
        {
            if(value<parent->data)
            {
                current=parent;
                parent=parent->left;
            }
            else
            {
                current=parent;
                parent=parent->right;
            }
        }
        if(value<current->data){
            current->left=newNode;
        }
        else{
            current->right=newNode;
        }
    }
}
int main()
{
    insertNode(1);
}
