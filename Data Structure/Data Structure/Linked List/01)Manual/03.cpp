#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node *next;
};
int main(){
Node *first=new Node();
Node *second=new Node();
Node *third=new Node();
Node *fourth=new Node();

first->data=5;
second->data=12;
third->data=19;
fourth->data=25;

first->next=second;
second->next=third;
third->next=fourth;
fourth->next=NULL;

Node *head=first;
Node *temp=head;
while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<"NULL"<<endl;
}
