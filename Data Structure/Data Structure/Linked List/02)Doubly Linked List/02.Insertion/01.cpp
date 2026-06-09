#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev, *next;
};
Node *head=NULL;
Node *tail=NULL;
Node *createNode( int value)
{
    Node *newNode=new Node();
    newNode->data=value;
    return newNode;
}
void insertion_at_tail(int value)
{
    Node* newNode=createNode(value);
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        newNode->prev=NULL;
    }
    else
    {
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
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
    else
    {
        cout<<"List Empty."<<endl;
    }
}
void reverseDisplay()
{
    Node *temp=tail;
    if(temp!=NULL)
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
    else
    {
        cout<<"List Empty."<<endl;
    }
}
void insert_at_node(int target,int value)
{
    Node *temp=head;
    if(temp!=NULL)
    {
        Node *x, *y;
        while(temp!=NULL && temp->data!=target)
        {
            temp=temp->next;
        }
        if(temp==NULL)
        {
            insertion_at_tail(value);
        }
        else
        {
            x=temp;
            y=x->next;
            Node *newNode=createNode(value);
            x->next=newNode;
            newNode->prev=x;
            newNode->next=y;
        }
    }
    else
    {
        insertion_at_tail(value);
    }
}
void insert_at_head(int value)
{
    Node *temp=head;
    if(temp!=NULL)
    {
        Node *newNode=createNode(value);
        newNode->prev=NULL;
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
    else
    {
        insertion_at_tail(value);
    }
}
int main()
{
    insertion_at_tail(10);
    display();
    reverseDisplay();
    insertion_at_tail(10);
    insertion_at_tail(20);
    insertion_at_tail(30);
    insertion_at_tail(40);
    display();
    reverseDisplay();
    insert_at_node(30,31);
    insert_at_node(20,50);
    insert_at_node(60, 11);
    display();
    insert_at_head(1);
    display();
}
