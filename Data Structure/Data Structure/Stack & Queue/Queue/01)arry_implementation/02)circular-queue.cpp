#include<bits/stdc++.h>
using namespace std;
int head=-1, tail=-1;
const int siz=5;
int arr[siz];
bool isEmpty(){
if(head==-1 && tail==-1){
    cout<<"Underflow."<<endl;
    return true;
}
else{
    return false;
}
}
bool isFull(){
if((tail+1)%siz==head){
    cout<<"Overflow."<<endl;
    return true;
}
else{
    return false;
}
}
void enqueue(int data){
    if(isFull()==false){
        cout<<data<<" is enqueued."<<endl;
        if(isEmpty()==true){
            head=0;
        }
         tail=(tail+1)%siz;
            arr[tail]=data;
}
}
void dequeue(){
    if(isEmpty()==false){
            cout<<arr[head]<<" is dequeued."<<endl;
        if(head==tail){
            head=tail=-1;
        }
        else{
            head=(head+1)%siz;
        }
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
}
