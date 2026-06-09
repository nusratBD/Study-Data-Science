/*
জোড় ও বিজোড় সংখ্যা আলাদা করা (Even and Odd Nodes)
টাস্ক: ইউজার ডায়নামিকালি কিছু সংখ্যা ইনপুট দেবে (যেমন: 2 -> 5 -> 3 -> 8 -> 1 -> 4 -> NULL)। তোমাকে লিঙ্কড লিস্টটি ট্রাভার্স করে শুধুমাত্র জোড় (Even) সংখ্যাগুলোকে নিয়ে একটি নতুন লিঙ্কড লিস্ট এবং বিজোড় (Odd) সংখ্যাগুলোকে নিয়ে আরেকটি নতুন লিঙ্কড লিস্ট তৈরি করে দুটোই প্রিন্ট করতে হবে।

যেটা স্ট্রং হবে: একই সাথে একাধিক ডায়নামিক লিঙ্কড লিস্টের head এবং tail হ্যান্ডেল করার ক্ষমতা।
*/
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
Node *tail=NULL;
void display_even_odd(Node *temp1, Node *temp2);
void even_odd(Node *temp)
{
    if(temp!=NULL)
    {
        Node *even_head=NULL;
        Node *even_tail=NULL;
        Node *odd_head=NULL;
        Node *odd_tail=NULL;
        while(temp!=NULL)
        {
            if(temp->data%2==0)
            {
                Node *evenNode=new Node();
                evenNode->data=temp->data;
                evenNode->next=NULL;
                if(even_head==NULL)
                {
                    even_head=evenNode;
                    even_tail=evenNode;
                }
                else
                {
                    even_tail->next=evenNode;
                    even_tail=evenNode;
                }
            }
            else
            {
                Node *oddNode=new Node();
                oddNode->data=temp->data;
                oddNode->next=NULL;
                if(odd_head==NULL)
                {
                    odd_head=oddNode;
                    odd_tail=oddNode;
                }
                else
                {
                    odd_tail->next=oddNode;
                    odd_tail=oddNode;
                }

            }
            temp=temp->next;
        }
        Node *temp1=even_head;
        Node *temp2=odd_head;
        display_even_odd(temp1,temp2);
    }

    else
    {
        cout<<"Linked List Empty."<<endl;
    }
}
void display_even_odd(Node *temp1, Node *temp2)
{
    cout<<"Even Numbers: "<<endl;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    cout<<endl;
    cout<<"Odd Numbers: "<<endl;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
}
int main()
{
    int value;
    cout<<"Enter the Node value or -1 to exit: "<<endl;
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
    even_odd(temp);
}
