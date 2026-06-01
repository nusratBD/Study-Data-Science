//Count Event Numbers from a linked list
#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node *next;
};
Node *head=NULL;
Node *tail=NULL;
int main(){
int value;
cout<<"Enter Node Value or -1 to exit: "<<endl;
cin>>value;
while(value!=-1){
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
    cin>>value;
}
Node *temp=head;
int i=0;
while(temp!=NULL){
    if(temp->data%2==0){
        i++;
    }
    temp=temp->next;
}
cout<<"Total Even Numbers: "<<i<<endl;
}
