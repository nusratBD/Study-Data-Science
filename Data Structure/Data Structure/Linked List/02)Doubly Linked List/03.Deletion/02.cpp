//Insertion & Deletion
#include<iostream>
using namespace std;
void display();
void mgs();
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
        head->prev=NULL;
    }
    else
    {
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    display();
}
void insert_at_head(int value)
{
    if(head==NULL)
    {
        insert_at_tail(value);
    }
    else
    {
        Node *newNode=createNode(value);
        newNode->next=head;
        head->prev=newNode;
        newNode->prev=NULL;
        head=newNode;
        display();
    }
}
void insert_after_node(int target, int value)
{
    if(head==NULL)
    {
        insert_at_tail(value);
        return;
    }
    Node *temp=head;
    while(temp!=NULL &&temp->data!=target)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout<<target<<" does not exist in the list."<<endl;
        insert_at_tail(value);
        return;
    }
    if(temp!=NULL && temp->next==NULL && temp->data==target)
    {
        insert_at_tail(value);
        return;
    }
    Node *x=temp;
    Node *y=x->next;
    Node *newNode=createNode(value);
    x->next=newNode;
    newNode->prev=x;
    newNode->next=y;
    y->prev=newNode;
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
    else
    {
        mgs();
    }
}
void mgs()
{
    cout<<"List Empty."<<endl;
}
    void dlt_for_single_value(Node *temp)
    {
        head=NULL;
        tail=NULL;
        delete temp;
        display();
    }
    void dlt_from_tail()
    {
        if(head!=0)
        {
            Node *temp1=head;
            Node *temp2=tail;
            if(temp1->next==NULL)
            {
                dlt_for_single_value(temp1);
                return;
            }
            Node *x=temp2->prev;
            x->next=NULL;
            tail=x;
            delete temp2;
            display();
            return;

        }
        else
        {
            mgs();
        }
    }
    void dlt_from_head()
    {
        Node *temp=head;
        if(temp!=NULL)
        {
            if(temp->next==NULL){
                dlt_for_single_value(temp);
                return;
            }
            Node *x=temp->next;
            x->prev=NULL;
            head=x;
            delete temp;
            display();
    }
        else
        {
            mgs();
        }
    }
    void dlt_from_node(int value){
    Node *temp=head;
    if(temp==NULL){
            mgs();
            return;
    }
    if(temp->next==NULL && temp->data==value){
        dlt_for_single_value(temp);
        return;
    }
    while(temp!=NULL && temp->data!=value){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<value<<" does not exist to the list."<<endl;
        display();
        return;
    }
    if(temp!=NULL && temp->next==NULL){
    dlt_from_tail();
    return;
    }
    if(temp!=NULL && temp->prev==NULL){
        dlt_from_head();
        return;
    }
    Node *x=temp->prev;
    Node *y=temp->next;
    x->next=y;
    y->prev=x;
    delete temp;
    display();
    }
    int main()
    {
        insert_after_node(1,5);
        insert_after_node(1,6);
        insert_after_node(5,4);
        dlt_from_node(7);

    }
