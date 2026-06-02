//প্রবলেম ৩: লিঙ্কড লিস্টের সবচেয়ে বড় সংখ্যাটি খোঁজা (Find Maximum)
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=0;
Node *tail=0;
void findMax(Node *temp)
{
    if(temp!=NULL)
    {

        int max=temp->data;
        temp=temp->next;
        while(temp!=NULL)
        {
            if(temp->data>max)
            {
                max=temp->data;
            }

            temp=temp->next;
        }
        cout<<"Max: "<<max<<endl;
    }
    else{
        cout<<"List Empty."<<endl;
    }
}
int main()
{
    int value;
    cout<<"Enter the value of Node or -1 to exit: ";
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
    findMax(temp);
}

