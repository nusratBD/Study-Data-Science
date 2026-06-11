#include<iostream>
using namespace std;
void display();
const int n=5;
int arr[n];
int head=-1;
int tail=-1;
bool isEmpty()
{
    if(head==-1 && tail==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isFull()
{
    if(head==(tail+1)%n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(int value)
{
    if(isFull()==false)
    {
        if(isEmpty()==true)
        {
            head=0;
        }
        tail=(tail+1)%n;
        arr[tail]=value;
        display();
    }
    else{
        cout<<"Queue is Full."<<endl;
    }
}
void pop()
{
    if(isEmpty()==false)
    {
        if(head==tail)
        {
            head=tail=-1;
        }
        else
        {
            head=(head+1)%n;
        }
        display();
    }
    else
    {
        cout<<"Queue Empty."<<endl;
    }
}
void display()
{
    if(isEmpty()==false)
    {
        int i=head;
        while(true)
        {
            cout<<arr[i]<<" ";
            if(i==tail) break;
            i=(i+1)%n;
        }
        cout<<endl;
    }
    else
    {
        cout<<"Queue Empty."<<endl;
    }
}
int main()
{
    display();
    push(10);
    push(11);
    push(12);
    push(13);
    push(14);
    push(15);
    pop();
    pop();
    push(16);
    push(17);
}
