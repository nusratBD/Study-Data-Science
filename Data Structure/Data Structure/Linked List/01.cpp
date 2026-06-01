#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int a;
    Node *next;
};
Node *myList, *head, *tail;
void add(int data)
{
    Node *n1=new (Node);
    cout<<myList<<endl;
    cout<<typeid(myList).name()<<endl;
    if(myList==NULL)
    {
        cout<<myList<<endl;
        myList=n1;
        head=n1;
        tail=n1;
        tail->a=data;
        head->next=NULL;
    }
    else
    {
        head=tail;
        tail=n1;
        head->next=tail;
        tail->a=data;
        tail->next=NULL;
    }

}
void display()
{
    if(myList!=NULL)
    {
        Node *n=myList;
        for(n; n!=NULL; n=n->next){
            cout<<n->a<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"Null"<<endl;
    }
}

int main()
{
    add(5);
    add(100);
    add(500);
    add(700);
    add(800);
    add(900);
    display();
pop(5);
}
