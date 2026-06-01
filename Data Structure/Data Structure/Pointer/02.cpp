#include<bits/stdc++.h>
using namespace std;
int main(){
int a=10;
int b=20;
int *x=&a;
string y="Hello";
string *ptr=&y;
cout<<"a="<<a<<endl;
cout<<"&a="<<&a<<endl;
cout<<"*x="<<*x<<endl;
cout<<"x="<<x<<endl;
cout<<"&x="<<&x<<endl;
cout<<"*&x="<<*&x<<endl;
cout<<"&*x="<<&*x<<endl;
cout<<"x+1="<<x+1<<endl;
}
