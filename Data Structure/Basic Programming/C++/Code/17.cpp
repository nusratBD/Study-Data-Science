//Inheritance-function overloading
#include<bits/stdc++.h>
using namespace std;
class Math{
public:
    void add(int a, int b){
    cout<<"Integer Sum: "<<a+b<<endl;
    }
    void add(double a, double b){
    cout<<"Double Sum: "<<a+b<<endl;
    }
};
int main(){
    Math m;
    m.add(2,3);
    m.add(2.5,3.5);
}
/*
একই নাম → add()
কিন্তু ভিন্ন parameter → ভিন্ন কাজ।
এটাই Polymorphism।
*/
