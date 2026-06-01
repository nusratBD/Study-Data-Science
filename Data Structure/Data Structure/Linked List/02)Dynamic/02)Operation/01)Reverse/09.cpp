//Print the value of Linked List in Reverse Order
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
cout<<"Enter Node value or -1 to exit: "<<endl;
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
int *arr;
arr=(int*)calloc(10,sizeof(int));
int i=0;
while(temp!=NULL){
    arr[i]=temp->data;
cout<<"i: "<<i<<"arr[i]: "<<arr[i]<<endl;
    temp=temp->next;
    i++;
}
arr=(int*)realloc(arr,i*sizeof(int));
cout<<i<<endl;
for(int j=i-1; j>=0; j--){
    cout<<arr[j]<<" ";
}
}
