#include<iostream>
using namespace std;
void display();
void dlt_from_head();
struct Node
{
    int data;
    Node *prev, *next;
};

Node *head=NULL;
Node *tail=NULL;

Node *createNode(int value)
{
    Node *newNode=new Node();
    newNode->data=value;
    return newNode;
}

void insert_at_tail(int value)
{
    Node *newNode=createNode(value);
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
    display();
}
void insert_at_node(int target, int value)
{
    Node *temp=head;
    if(temp!=NULL)
    {
        while(temp!=NULL && temp->data!=target)
        {
            temp=temp->next;
        }
        if(temp==NULL)
        {
            insert_at_tail(value);
        }
        else
        {
            Node *x=temp;
            Node *y=x->next;
            Node *newNode=createNode(value);
            if(y==NULL)
            {
                insert_at_tail(value);
                return;
            }
            x->next=newNode;
            y->prev=newNode;
            newNode->prev=x;
            newNode->next=y;
            display();
        }

    }
    else
    {
        insert_at_tail(value);
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
        display();
    }
    else
    {
        insert_at_tail(value);
    }
}
void dlt_from_tail()
{
    Node *temp=tail;
    if(temp!=NULL)
    {
        if(temp->prev==NULL && temp->next==NULL)
        {
            dlt_from_head();
        }
        else
        {
            Node *x=temp->prev;
            x->next=NULL;
            tail=x;
            delete temp;
            display();
        }

    }
    else
    {
        cout<<"List Empty. Nothing to Delete."<<endl;
    }
}

void dlt_from_head()
{
    Node *temp=head;
    if(temp!=NULL)
    {
        if(temp->prev==NULL && temp->next==NULL)
        {
            head=NULL;
            tail=NULL;
            delete temp;
            display();
        }
        else
        {
            Node *x=temp->next;
            x->prev=NULL;
            head=x;
            delete temp;
            display();
        }
    }
    else
    {
        cout<<"List Empty. Noting to delete."<<endl;
    }
}
void dlt_from_node(int value)
{
    Node *temp=head;
    if(temp!=NULL)
    {
        while(temp!=NULL && temp->data!=value)
        {
            temp=temp->next;
        }
        if(temp==NULL)
        {
            cout<<value<<" doesn't exist to the list."<<endl;
        }
        else
        {
            Node *x=temp;
            if(x->prev==NULL && x->next==NULL)
            {
                dlt_from_head();
                return;
            }
            else if(x->prev==NULL && x->next!=NULL){
                dlt_from_head();
                return;
            }
            else if(x->prev!=NULL && x->next==NULL){
                dlt_from_tail();
            return;
            }
            Node *y=x->next;
            Node *z=x->prev;
            z->next=y;
            y->prev=z;
            delete x;
            display();
        }
    }
    else
    {
        cout<<"List Empty. Nothing to delete."<<endl;
    }
}
int main()
{
    insert_at_tail(1);
    insert_at_tail(2);
    insert_at_tail(3);
    insert_at_tail(4);
    insert_at_node(3,5);
    insert_at_node(4,6);
    insert_at_head(10);
    dlt_from_tail();
    dlt_from_head();
    dlt_from_node(3);
    dlt_from_node(4);
}
