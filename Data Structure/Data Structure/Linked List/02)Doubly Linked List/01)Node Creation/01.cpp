#include<iostream>
using namespace std;
struct Node{
int data;
Node *prev, *next;
};
Node *head=NULL;
Node *tail=NULL;
void node_creation(int value){
Node *newNode=new Node();
newNode->data=value;
newNode->next=NULL;
if(head==NULL){
    head=newNode;
    tail=newNode;
    newNode->prev=NULL;
}
else{
    newNode->prev=tail;
    tail->next=newNode;
    tail=newNode;
}
}
void display(){
Node *temp=head;
if(temp!=NULL){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
else{
    cout<<"List Empty."<<endl;
}
}
void reverse_display(){
Node *temp=tail;
while(temp!=NULL){
        cout<<temp->data<<" ";
    temp=temp->prev;
}
cout<<endl;
}
int main(){
node_creation(10);
node_creation(20);
node_creation(30);
node_creation(40);
display();
reverse_display();
}
