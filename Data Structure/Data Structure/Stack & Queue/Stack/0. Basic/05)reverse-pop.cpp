#include<bits/stdc++.h>
using namespace std;
int top=-1;
const int n=5;
int arr[n];
bool isEmpty(){
if(top==-1){
    cout<<"Stack is Empty."<<endl;
    return true;
}
else{
    return false;
}
}
bool isFull(){
if(top==n-1){
    cout<<"Stack is Full."<<endl;
    return true;
}
else{
    return false;
}
}
void push(int value){
    if(isFull()==false){
        cout<<value<<" is pushed."<<endl;
        top++;
        arr[top]=value;
    }
}
void pop(){
if(isEmpty()==false){
    cout<<arr[top]<<" is poped."<<endl;
    top--;
}
}
void display(){
if(isEmpty()==false){
    for(int i=0; i<=top; i++){
        cout<<arr[i]<<" ";
    }
}
}
void reverseDisplay(){
if(isEmpty()==false){
    int newArray[n];
for(int i=0; i<n; i++){
    newArray[i]=arr[top];
    pop();

}
for(int i=0; i<n; i++){
    cout<<newArray[i]<<" ";
}
}
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    reverseDisplay();

}
