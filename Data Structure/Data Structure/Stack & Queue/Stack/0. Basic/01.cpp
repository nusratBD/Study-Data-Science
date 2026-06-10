#include<iostream>
using namespace std;
void display();
int top=-1;
const int n=5;
int arr[n];
bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if(top==n-1){
        return true;
    }
    else{
        return false;
    }
}
void push(int value){
    if(isFull()==false){
        top++;
        arr[top]=value;
        display();
    }
    else{
        cout<<"Stack Full."<<endl;
    }
}
void pop(){
    if(isEmpty()==false){
        top--;
        display();
    }
    else{
        cout<<"Stack Empty."<<endl;
    }
}
void display(){
if(isEmpty()==false){
    for(int i=0; i<=top; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
else{
    cout<<"Stack Empty."<<endl;
}
}
void reverseDisplay(int top){
if(top==-1){
    return;
}
cout<<arr[top]<<" ";
reverseDisplay(top-1);
}
int main(){
display();
pop();
push(10);
push(20);
push(30);
push(40);
push(50);
push(60);
reverseDisplay(top);
cout<<endl;
pop();
pop();
pop();
pop();
pop();
pop();
}
