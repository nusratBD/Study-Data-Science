#include<iostream>
using namespace std;
struct Node{
int data;
Node *next;
};
Node *head=NULL;
Node *tail=NULL;
void add(int value){
Node *newNode=new Node();
newNode->data=value;
newNode->next=NULL;
if(head==NULL){
    head=newNode;
    tail=newNode;
}
else{
    tail->next=newNode;
    tail=newNode;
}
}
void display(Node *temp){
if(temp!=NULL){
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
else{
    cout<<"List Empty."<<endl;
}
}
int main(){
add(5);
add(10);
add(15);
add(6);
Node *temp=head;
display(temp);
}
