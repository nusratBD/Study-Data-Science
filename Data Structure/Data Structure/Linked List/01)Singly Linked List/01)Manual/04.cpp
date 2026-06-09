#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node *next;
};
int main(){
    Node *A=new Node();
    Node *B=new Node();
    Node *C=new Node();

    A->data=10;
    B->data=20;
    C->data=30;

    A->next=B;
    B->next=C;
    C->next=NULL;

    Node *head=A;
    cout<<"Head: "<<head<<endl;
    cout<<"B->next: "<<B->next<<endl;
    cout<<"C->next: "<<C->next<<endl;
}
