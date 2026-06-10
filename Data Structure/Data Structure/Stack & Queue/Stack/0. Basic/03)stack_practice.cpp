#include<bits/stdc++.h>
using namespace std;
int top=-1;
const int siz=4;
int arr[siz];
bool isFull()
{
    if(top==siz-1)
    {
        cout<<"Stack is Full."<<endl;
        return true;
    }
    else
    {
        return false;
    }
}
bool isEmpty()
{
    if(top==-1)
    {
        cout<<"Stack is Empty."<<endl;
        return true;
    }
    else
    {
        return false;
    }
}
void push(int data)
{
    if(isFull()==false)
    {
        top++;
        arr[top]=data;
        cout<<data<<" is pushed."<<endl;
    }
}
void pop()
{
    if(isEmpty()==false)
    {
        cout<<arr[top]<<" is removed."<<endl;
        top--;
    }
}
void display()
{
    cout<<"The array is: "<<endl;
    for(int i=0; i<=top; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverseDisplay()
{
    if(isEmpty()==false)
    {
        cout<<"Reverse Stack: ";
        for(int i=top; i>=0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
void displayTop()
{
    if(isEmpty()==false)
    {
        cout<<"The top value is: "<<arr[top]<<" Index: "<<top<<endl;
    }
}
int main()
{
    displayTop();
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    reverseDisplay();
    displayTop();
    push(10);
    pop();
    displayTop();
    display();
    reverseDisplay();
}
