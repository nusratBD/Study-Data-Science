#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
Node *tail=NULL;
void add(int value)
{
    Node *newNode = new Node();
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}
int display(Node *temp){
    if(temp==NULL){
        return 1;
    }
    return temp->data*display(temp->next);
}
int main()
{
add(1);
add(2);
add(3);
add(4);
add(5);
Node *temp=head;
int r=display(temp);
cout<<"Result: "<<r<<endl;
}
