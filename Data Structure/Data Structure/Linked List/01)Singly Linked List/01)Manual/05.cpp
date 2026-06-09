#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node *next;
};
int main(){
Node *var1=new Node();
Node *var2=new Node();
Node *var3=new Node();

var1->data=10;
var2->data=20;
var3->data=30;

var1->next=var2;
var2->next=var3;
var3->next=NULL;

Node *head=var1;
Node *temp=head;
int sum=0;
while(temp!=NULL){
    sum=sum+temp->data;
    temp=temp->next;
}
cout<<"Sum: "<<sum<<endl;
}
