/*
1.print

*/
#include<iostream>
#include<iomanip>//setprecision এর জন্য
//#include<bits/stdc++.h>
using namespace std;
int main(){
int a=100;
float b=100.57856454;
float c=23.67;
char d[10]="Hello";
cout<<"Hello World"<<endl;//Hello World
cout<<"Welcome to my class"<<endl;//Welcome to my class
cout<<"You Got "<<a<<" marks."<<endl;//You Got 100 marks.
cout<<b<<endl;//100.579
cout<<fixed<<setprecision(5)<<b<<endl;//100.57857
cout<<fixed<<setprecision(5)<<c<<endl;//23.67000
cout<<d<<endl;
}
