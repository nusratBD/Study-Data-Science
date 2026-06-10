//stack with Linked List
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
void push(int value)
{
    Node *newNode=new Node();
    newNode->data=value;
    if(head==NULL)
    {
        newNode->next=NULL;
        head=newNode;
    }
    else
    {
        newNode->next=head;
        head=newNode;
    }
    delete temp;
}
void pop(){
Node *temp=head;
if(temp!=NULL){
    if(head->next==NULL){
        head=NULL;
    }
    else{
        head=head->next;
    }
}
else{
    cout<<"List Empty."<<endl;
}
}
void display()
{
    Node *temp=head;
    if(temp!=NULL)
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }
}
int main()
{
push(10);
push(20);
push(30);
push(40);
display();
pop();
display();
}
