#include<bits/stdc++.h>
using namespace std;
int head=-1;
int tail=-1;
const int siz=4;
int arr[siz];
bool isEmpty(){
if(head==-1 && tail==-1){
    cout<<"Queue is Empty."<<endl;
    return true;
}
else{
    return false;
}
}
bool isFull(){
if(tail==siz-1){
    cout<<"Queue is Full."<<endl;
    return true;
}
else{
    return false;
}
}
void enqueue(int value){
    if(isFull()==false){
        if(head==-1){
            head=0;
        }
        cout<<value<<" is enqueued."<<endl;
        tail++;
        arr[tail]=value;
    }
}
void dequeue(){
    if(isEmpty()==false){
            cout<<arr[head]<<" is dequeued."<<endl;
            if(head==tail){
                head=-1;
                tail=-1;
            }
            else{
                head++;
            }
    }
}
void display(){
    if(isEmpty()==false){
        cout<<"The Original Array is: "<<endl;
    for(int i=head; i<=tail; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
}
void displayHeadTail(){
    if(isEmpty()==false){
        cout<<"Head: "<<arr[head]<<" Head Index:"<<head<<endl;
        cout<<"Tail: "<<arr[tail]<<" Tail Index:"<<tail<<endl;
    }
}
int main(){
    displayHeadTail();
    enqueue(10);
    enqueue(20);
    display();
    displayHeadTail();
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    display();
    displayHeadTail();
    enqueue(50);
}
