#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node *next;
};
int main(){
Node* first = new Node();
Node* second = new Node();
Node* third = new Node();
first->data=10;
second->data=20;
third->data=30;
first->next=second;
second->next=third;
third->next=NULL;
}
