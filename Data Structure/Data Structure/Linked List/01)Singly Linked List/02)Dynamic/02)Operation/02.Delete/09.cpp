//Delete a Node
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
        cout<<endl;
    }
    else{
        cout<<"List Empty."<<endl;
    }
}
void dlt(int value, Node *temp){
    Node *x,*y;
if(temp!=NULL){
    while(temp->data!=value){
        x=temp;
        temp=temp->next;
    }

    Node *toDelete=x->next;
    y=x->next->next;
    x->next=y;
    delete toDelete;
}
else{
    cout<<"List Empty."<<endl;
}
}
int main(){
    add(10);
    add(20);
    add(30);
    add(40);
    add(50);
    add(60);
    add(70);
    Node *temp=head;
    display(temp);
    dlt(40, temp);
    display(temp);

}
