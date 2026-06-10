#include<iostream>
using namespace std;
void display();
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
Node *tail=NULL;
void push(int value)
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
    display();
}
void pop()
{
    Node *temp=head;
    if(head!=NULL)
    {
        if (head->next==NULL)
        {
            head=NULL;
            tail=NULL;
            delete temp;
        }

        else
        {
            head=head->next;
            delete temp;
        }
    }
    else
    {
        cout<<"Queue Empty."<<endl;
    }
    display();
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
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    pop();
    pop();
    pop();
    pop();
}
