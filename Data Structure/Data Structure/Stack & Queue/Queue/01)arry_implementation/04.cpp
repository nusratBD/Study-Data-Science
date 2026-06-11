//Circularu Queue
#include<iostream>
using namespace std;
void display();
const int n=5;
int arr[5];
int head=-1, tail=-1;
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
void enqueue(int value)
{
    if(isFull()==false)
    {
        tail=(tail+1)%n;
        arr[tail]=value;
        display();
    }
    else
    {
        cout<<"Queue Full."<<endl;
    }
}
void dequeue()
{
    if(isEmpty()==false)
    {
        if(head==tail)
        {
            head=-1;
            tail=-1;
            display();
            return;
        }
        head=(head+1)%n;
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
    enqueue(10);
    enqueue(11);
    enqueue(12);
    enqueue(13);
    dequeue();
    dequeue();
    enqueue(14);
    enqueue(15);
    enqueue(16);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
}
