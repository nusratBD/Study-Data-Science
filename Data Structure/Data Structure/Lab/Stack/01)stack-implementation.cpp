//Stack Implementation
#include<bits/stdc++.h>
using namespace std;
int top=-1;
const int siz=4;
int arr[siz];
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

    if(top==siz-1){
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
        cout<<"Original Array: ";
        for(int i=0; i<=top; i++){
            cout<<arr[i]<<" ";
        }
    cout<<endl;
    }
}
void displayTop(){
    cout<<"The top value is: "<<arr[top]<<" Index of top: "<<top<<endl;
}
int main(){
    display();
    push(10);
    push(20);
    push(30);
    display();
    displayTop();
    push(40);
    push(50);
    push(60);
    pop();
    pop();
    display();
    displayTop();
    pop();
    pop();
    pop();
}
