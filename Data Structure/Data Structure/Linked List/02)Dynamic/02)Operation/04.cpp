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
    Node *newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else
    {
        tail->next=newNode;
        tail=newNode;
    }
}
void display(Node *temp){
    if(temp!=NULL){
        display(temp->next);
        cout<<temp->data<<" ";
    }
}
int main()
{
    add(10);
    add(20);
    add(30);
    add(6);
    add(4);
    Node *temp=head;
    display(temp);
}
