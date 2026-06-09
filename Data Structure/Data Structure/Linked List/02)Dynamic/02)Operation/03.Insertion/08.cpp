#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
Node *tail=NULL;
Node *create_node(int value){
    Node *newNode=new Node();
    newNode->data=value;
    return newNode;
}
void insert_at_tail(int value)
{
    Node*newNode=create_node(value);
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
void insert_at_head(int value)
{
    Node *temp=head;
    if(temp!=NULL){
        Node*newNode=create_node(value);
        head=newNode;
        newNode->next=temp;
    }
    else{
        insert_at_tail(value);
    }
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
            Node*newNode=create_node(value);
            x->next=newNode;
            newNode->next=y;
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
int main()
{
    insert_at_head(50);
    insert_at_tail(10);
    insert_at_tail(11);
    insert_at_tail(12);
    insert_at_node(10,155);
    display();
    insert_at_node(11,15);
    display();
    insert_at_node(14,20);
    display();
    insert_at_node(12, 21);
    display();
    insert_at_node(16, 22);
    display();
    insert_at_head(100);
    display();
    insert_at_head(200);
    display();

}
