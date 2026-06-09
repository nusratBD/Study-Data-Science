//Reverse the value of a linked list using recursion
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
Node *tail=NULL;
void recur(Node *temp)
{
    if(temp==NULL)
    {
        return;
    }
    recur(temp->next);
    cout<<temp->data<<" ";
}
int main()
{
    int value;
    cout<<"Enter the value of Node or -1 to exit: "<<endl;
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
    recur(temp);
}
