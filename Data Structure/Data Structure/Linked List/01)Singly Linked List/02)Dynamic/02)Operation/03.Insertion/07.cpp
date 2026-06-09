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
void mid(Node *temp)
{

    Node *fast=temp;
    Node *slow=temp;
    cout<<"Mid Point: "<<endl;
    while(fast!=NULL && fast->next!=NULL)
    {

        fast=fast->next->next;
        cout<<"Fast: "<<fast->data<<endl;
        slow=slow->next;
        cout<<"Slow: "<<slow->data<<endl;
    }
    cout<<"Mid Point: "<<slow->data;

}
int main()
{
    add(10);
    add(20);
    add(30);
    add(40);
    add(50);
    Node *temp=head;
    mid(temp);
}
