#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
Node *tail=NULL;
void insert()
{
    if(head==NULL)
    {
        Node *newNode=new Node();
        newNode->data=1;
        head=newNode;
        tail=newNode;
        newNode->next=head;
    }
    else
    {
        for(int i=2; i<=20; i++)
        {
            Node *newNode=new Node();
            newNode->data=i;
            tail->next=newNode;
            newNode->next=head;
            tail=newNode;
        }

    }
}
void display()
{
    Node *temp=head;
    if(temp!=NULL)
    {
        while(true)
        {
            cout<<temp->data<<" ";
            if(temp->next==head) break;
            temp=temp->next;
        }
        cout<<endl;
    }
    else
    {
        cout<<"List Empty."<<endl;
    }
}
void josephus_problem()
{
    Node *temp=head;
    Node *x=NULL;
    Node *y=NULL;
    while(temp->next!=temp)
    {
        x=temp;
        y=temp->next;
        temp=y->next;
        x->next=temp;
        delete y;
    }
    cout<<temp->data<<endl;
}
int main()
{
    display();
    insert();
    insert();
    display();
    josephus_problem();
}
