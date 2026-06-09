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
    int n=0;
    while(value!=-1){
    n++;
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
    int arr[n];
    Node *temp=head;
    int i=0;
    while(temp!=NULL){
        arr[i]=temp->data;
        temp=temp->next;
        i++;
    }
    cout<<"Reverse Value: "<<endl;
    for(int j=n-1; j>=0; j--){
        cout<<arr[j]<<" ";
    }
}
