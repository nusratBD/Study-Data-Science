/*
১. জোড় ও বিজোড় সংখ্যা আলাদা করা (Even and Odd Nodes)
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

void even_odd_display(Node *eventTemp, Node *oddTemp);
void even_odd(Node *temp)
{

    if(temp!=NULL)
    {

        Node *evenHead=NULL;
        Node *evenTail=NULL;
        Node *oddHead=NULL;
        Node *oddTail=NULL;
        while(temp!=NULL){
            if(temp->data%2==0){
                Node *evenNode=new Node();
                evenNode->data=temp->data;
                evenNode->next=NULL;
                if(evenHead==NULL){
                    evenHead=evenNode;
                    evenTail=evenNode;
                }
                else{
                    evenTail->next=evenNode;
                    evenTail=evenNode;
                }
            }
            else{
                Node *oddNode=new Node();
                oddNode->data=temp->data;
                oddNode->next=NULL;
                if(oddHead==NULL){
                    oddHead=oddNode;
                    oddTail=oddNode;
                }
                else{
                    oddTail->next=oddNode;
                    oddTail=oddNode;
                }
            }
            temp=temp->next;
            }
            Node *evenTemp=evenHead;
        Node *oddTemp=oddHead;
        even_odd_display(evenTemp,oddTemp);

        }

    else
    {
        cout<<"Linked List Empty."<<endl;
    }
}
void even_odd_display(Node *evenTemp, Node *oddTemp){
    cout<<"Even: ";
    while(evenTemp!=NULL){
        cout<<evenTemp->data<<" ";
        evenTemp=evenTemp->next;
    }
    cout<<endl;
    cout<<"Odd: ";
    while(oddTemp!=NULL){
        cout<<oddTemp->data<<" ";
        oddTemp=oddTemp->next;
    }
}
int main()
{
    int value;
    cout<<"Enter Node value or -1 to exit: "<<endl;
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
