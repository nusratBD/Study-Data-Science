#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
Node *tail=NULL;
void display(Node *temp)
{
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
        cout<<"List Empty"<<endl;
    }
}
int main()
{
    int value;
    cout<<"Enter Value of Node or -1 to exit: "<<endl;
    cin>>value;
    while(value!=-1)
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
        cin>>value;
    }
    Node *temp=head;
    display(temp);
    value_delete(temp, 30);
    display(temp);
}
