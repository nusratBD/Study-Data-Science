//Reverse Stack
#include<bits/stdc++.h>
using namespace std;
int top=-1;
const int siz=4;
int arr[siz];
bool isFull(){
    if(top==siz-1){
        cout<<"Stack is Full."<<endl;
        return true;
    }
    else{
        return false;
    }
}
bool isEmpty(){
if(top==-1){
    cout<<"Stack is Empty."<<endl;
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
void displayArray(){
    if(isEmpty()==false){
        cout<<"Original Array: ";
        for(int i=0; i<=top; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
void displayTop(){
    if(isEmpty()==false){
       cout<<"The top value is: "<<arr[top]<<
       " Top index is: "<<top<<endl;
    }
}
void reverseArray(){
    if(isEmpty()==false){
        cout<<"Reverse Array: ";
        for(int i=0, j=top; i<j; i++,j--){
            swap(arr[i],arr[j]);
        }
        for(int i=0; i<=top; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    displayArray();
    reverseArray();
}
