/*Reverse a Stack
input: 1 2 3 4
output: 4 3 2 1
*/
#include<bits/stdc++.h>
using namespace std;
int top=-1;
const int siz=4;
int arr[siz];

bool overFlow()
{
    if(top==siz-1)
    {
        cout<<"Overflow."<<endl;
        return true;
    }
    else
    {
        return false;
    }
}
bool underFlow()
{
    if(top==-1)
    {
        cout<<"Underflow."<<endl;
        return true;
    }
    else
    {
        return false;
    }

}
void push(int value)
{
    if(overFlow()==false)
    {
        cout<<value<<" is pushed."<<endl;
        top++;
        arr[top]=value;
    }
}
void pop()
{
    if(underFlow()==false){
        cout<<arr[top]<<" is poped."<<endl;
        top--;
    }
}
void display()
{
cout<<"Original Array is: "
        <<endl;
    for(int i=0; i<=top; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
void reverseDisplay()
{
    cout<<"Reverse Array: "<<endl;
    for(int i=0, j=top; i<j; i++, j--)
    {
        swap(arr[i],arr[j]);
    }
    for(int i=0; i<=top; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    cout<<"Peek Index: "<<top<<" Peek Value: "<<arr[top]<<endl;
    pop();
    push(7);
    push(8);
    cout<<"Peek Index: "<<top<<" Peek Value: "<<arr[top]<<endl;
    display();
    reverseDisplay();
    push(9);
    push(10);
    push(11);
    display();
    reverseDisplay();
    pop();
    display();
    reverseDisplay();
    pop();
    pop();
    pop();
    pop();
}
