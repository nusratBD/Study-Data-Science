#include<bits/stdc++.h>
using namespace std;
int head=-1;
int tail=-1;
const int siz=4;
int value[siz];
bool isEmpty()
{
    if(head==-1 && tail==-1)
    {
        cout<<"Array Empty."<<endl;
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
        cout<<"Array Full."<<endl;
        return true;
    }
    else
    {
        return false;
    }
}
void display()
{
    if(isEmpty()==false)
    {
        for(int i=head; i<=tail; i++)
        {
            cout<<value[i]<<" ";
        }
        cout<<endl;
    }

}
void reverseDisplay(){
if(isEmpty()==false){
    for(int i=tail; i>=head; i--){
        cout<<value[i]<<" ";
    }
    cout<<endl;
}
}
void dequeu()
{
    if(isEmpty()==false)
    {
        cout<<value[head]<<" is dequeued."<<endl;
        if(head==tail)
        {
            head=-1;
            tail=-1;
        }
        else{
            head++;
        }
    }
}
void enqueu(int data)
{
    if(isFull()==false)
    {
        if(head=-1) head=0;
        tail++;
        value[tail]=data;
        cout<<data<<" is enqueued."<<endl;
        //display();
    }
}
int main()
{
    display();
    dequeu();
    enqueu(20);
    enqueu(30);
    enqueu(40);
    display();
    reverseDisplay();
    enqueu(50);
    enqueu(60);
    display();
    reverseDisplay();
    dequeu();
    dequeu();
    display();
    reverseDisplay();
    dequeu();
    dequeu();
    dequeu();
    dequeu();
    enqueu(100);
    dequeu();
    enqueu(200);
    enqueu(300);
    enqueu(400);
    enqueu(500);
    enqueu(600);
    dequeu();
}
