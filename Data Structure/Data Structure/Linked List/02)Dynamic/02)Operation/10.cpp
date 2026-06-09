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

if(head!=NULL){
    Node *temp=head;
    Node *x, *y;
    if(head->data==value)
    {
        Node *headNode=head;
        head=headNode->next;
        cout<<headNode->data<<" deleted"<<endl;
        delete headNode;
        //display(head);
    }
    else
    {
        while(temp!=NULL && temp->data!=value)
        {
            x=temp;
            temp=temp->next;
        }
        if(temp==NULL)
        {
            cout<<"Value not found."<<endl;
            return;
        }
        Node *dltNode=x->next;
        y=dltNode->next;
        x->next=y;

        cout<<dltNode->data<<" deleted."<<endl;
        delete dltNode;
    }
}
else{
    cout<<"Node Empty."<<endl;
}
}
int main()
{
    display();
    dlt(1);
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    add(6);
    add(7);
    display();
    dlt(5);
    display();
    dlt(1);
    display();
    dlt(8);
}
