#include<bits/stdc++.h>
using namespace std;
int head=-1, tail=-1;
const int n=5;
int data[n];
bool isEmpty()
{
    if(head==-1&&tail==-1)
    {
        cout<<"Queue is Empty."<<endl;
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
        cout<<"Queue is Full."<<endl;
        return true;
    }
    else
    {
        return false;
    }
}
void enqueue(int value)
{
    if(isFull()==false)
    {
        cout<<value<<" is enqueued."<<endl;
        if(head==-1)
        {
            head=0;
        }
        tail=(tail+1)%n;
        data[tail]=value;
    }
}
void dequeue()
{
    if(isEmpty()==false)
    {
        cout<<data[head]<<" is dequeued."<<endl;
        if(head==tail)
        {
            head=-1;
            tail=-1;
        }
        else
        {
            head=(head+1)%n;
        }
    }
}
void display()
{
    if(isEmpty()==false)
    {
        cout<<"Original Array: ";
        int i=head;
        while(true)
        {
            cout<<data[i]<<" ";
            if(i==tail) break;
            i=(i+1)%n;
        }
        cout<<endl;
    }
}
void reverseDisplay()
{
    if(isEmpty()==false)
    {
        cout<<"Reverse Array: ";
        int i=tail;
        while(true)
        {
            cout<<data[i]<<" ";
            if(i==head) break;
            i=(i-1)%n;
        }
        cout<<endl;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    reverseDisplay();
    enqueue(50);
    enqueue(60);
    display();
    reverseDisplay();
    dequeue();
    dequeue();
    dequeue();
    display();
    reverseDisplay();
    dequeue();
    dequeue();
    dequeue();
}
