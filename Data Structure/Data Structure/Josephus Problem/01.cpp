#include<iostream>
using namespace std;
void display();
struct Node{
int data;
Node *next;
};
Node *head=NULL;
Node *tail=NULL;
void insert(int n){
if(head==NULL){
    Node *newNode=new Node();
    newNode->data=1;
    head=newNode;
    tail=newNode;
    newNode->next=head;
}
    for(int i=2; i<=n; i++){
        Node *newNode=new Node();
        newNode->data=i;
        newNode->next=head;
        tail->next=newNode;
        tail=newNode;
    }
    display();
}
void display(){
Node *temp=head;
if(head!=NULL){
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
else{
    cout<<"List Empty."<<endl;
}
}
void josephus_problem(int n, int k){
insert(n);
Node *temp=head;
Node *x;
Node *y;
while(temp!=temp->next){
 for(int i=1; i<k; i++){
    temp=temp->next;
 }
 x=temp;//target node er ager node
 y=temp->next;//target node;
 temp=y->next;//target node er porer node
 x->next=temp;
 delete y;
}
cout<<temp->data<<endl;
}
int main(){
    josephus_problem(10,3);
}
