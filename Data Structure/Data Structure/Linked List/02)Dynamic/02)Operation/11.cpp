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
void dlt(int value)
{
    Node *temp=head;
    if(temp!=NULL)
    {
        Node *x;
        if(head->data==value)
        {
            Node *headNode=head;
            head=headNode->next;
            delete headNode;
        }
        else
        {
            while(temp!=NULL & temp->data!=value)
            {
                x=temp;
                temp=temp->next;
            }
            if(temp==NULL)
            {
                cout<<value<<" doesn't exist to the list." <<endl;
            }
            Node *y=x->next->next;
            x->next=y;
        }
    }
    else
    {
        cout<<"List Empty. Nothing to delete."<<endl;
    }
}
int main()
{
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    display();
    dlt(3);
    display();
}
