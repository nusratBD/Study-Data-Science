#include<bits/stdc++.h>
using namespace std;
int head=-1, tail=-1;
const int siz=4;
int arr[siz];
bool isEmpty()
{
    if(head==-1 && tail==-1)
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
    if(tail==siz-1)
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
        tail++;
        arr[tail]=value;
    }
}
void dequeue()
{
    if(isEmpty()==false)
    {
        cout<<arr[head]<<" is dequeued."<<endl;
        if(head==tail)
        {
            head=-1;
            tail=-1;
        }
        else
        {
            head++;
        }
    }
}
void display()
{
    if(isEmpty()==false)
    {
        cout<<"The Original Array: ";
        for(int i=head; i<=tail; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
void reverseDisplay()
{
    if(isEmpty()==false)
    {
        cout<<"The Reverse Array: ";
        for(int i=head, j=tail; i<j; i++, j--)
        {
            swap(arr[i],arr[j]);
        }
        for(int i=head; i<=tail; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
void displayHeadTail()
{
    if(isEmpty()==false)
    {
        cout<<"Head: "<<arr[head]<<" Index of Head: "<<head<<endl;
        cout<<"Tail: "<<arr[tail]<<" Index of Head: "<<tail<<endl;
    }
}
int main()
{
    display();
    displayHeadTail();
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    displayHeadTail();
    reverseDisplay();
    dequeue();
    display();
    reverseDisplay();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
}
