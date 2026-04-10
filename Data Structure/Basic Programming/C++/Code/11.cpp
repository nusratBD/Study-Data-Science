//Class & Object
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int age;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    Student s1;
    s1.name="Nusrat";
    s1.age=25;
    s1.display();
}
