#include<bits/stdc++.h>
using namespace std;
int top=-1;
const int siz=4;
int data[siz];
void display(){
    if(top==-1) cout<<"Stack is Empty."<<endl;
    else{
        for(int i=0; i<siz; i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
}
void push(int value){
    if(top==siz-1){
        cout<<"Overflow."<<endl;
    }
    else{
        top++;
        data[top]=value;
        cout<<"Data "<<data[top]<<" pushed."<<endl;
        display();
    }
}
void pop(){
    if(top==-1){
        cout<<"Stack is underflow. Nothing to pop."<<endl;
    }else{
        cout<<"Data Poped."<<data[top]<<endl;
        top--;
    }
}
int main(){
display();
push(10);
push(20);
push(30);
push(40);
push(50);
pop();
pop();
pop();
pop();
pop();

}
