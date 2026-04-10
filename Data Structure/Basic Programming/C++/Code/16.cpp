//Inheritance
#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    string name;
    int age;
    void person(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    }
};
class Student: public Person{
public:
    int studentID;
    void showID(){
    cout<<"Student ID: "<<studentID<<endl;
    }
};
int main(){
    Student s;
    s.name="Nusrat";
    s.age=28;
    s.studentID=101;
    s.person();
    s.showID();
}
