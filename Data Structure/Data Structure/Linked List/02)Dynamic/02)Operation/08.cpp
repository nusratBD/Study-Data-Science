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
void node_delete(int value, Node *temp){
    Node *prev,*after;
    while(temp->data!=value){
        temp=temp->next;
        break;
    }
    prev=temp;
    after=temp->next->next;
    prev->next=after;
}
void display(Node *temp){
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
}
int main(){
    add(10);
    add(20);
    add(30);
    add(40);
    add(50);
    Node *temp=head;
    display(temp);
    node_delete(30, temp);
    display(temp);
}
