/*
Basic Stack Implementation (Array)
push, pop, peek, display
overflow & underflow handle করো
*/
#include<bits/stdc++.h>
using namespace std;
int peek=-1;
const int siz=4;
int arr[siz];
bool overflow(){
if(peek==siz-1){
    cout<<"Overflow."<<endl;
    return true;
}else{
return false;
}
}
bool underflow(){
if(peek==-1){
    cout<<"Underflow."<<endl;
    return true;
}else{
return false;
}
}
void push(int value){
if(overflow()!=true){
    cout<<value<<" is pushed."<<endl;
    peek++;
    arr[peek]=value;
}
}
void pop(){
if(underflow()!=true){
    cout<<arr[peek] << " is poped."<<endl;
    peek--;
}
}
void display(){
    cout<<"The array is: ";
for(int i=0; i<=peek; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){
    cout<<"Peek Index: "<<peek<<" Peek Value: "<<arr[peek]<<endl;
    pop();
    push(7);
    push(8);
    cout<<"Peek Index: "<<peek<<" Peek Value: "<<arr[peek]<<endl;
    display();
    push(9);
    push(10);
    push(11);
    display();
    pop();
    display();
    pop();
    pop();
    pop();
    pop();
}
