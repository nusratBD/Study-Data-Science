/*
Question Link:
https://docs.google.com/document/d/1j-LXdS02SAPcr1qPdj2iga6QrFzz9-YU/edit
*/
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    char section;
    int roll;
protected:
    int english_marks;
private:
    string password;
public:
    void set_marks(int a){
        english_marks=a;
}
    void set_password(string a){
        password=a;
}
    int get_marks(){
    return english_marks;
    }
    void update_marks(string pass, int marks){
    if(password==pass){
        english_marks=marks;
    }else{
    cout<<"Incorrect Password."<<endl;
    }
    }
};
int main(){
int N;
cout<<"Enter the number of students: "<<endl;
cin>>N;

//Array of student class
Student students[N];

//Taking Input
for(int i=0; i<N; i++){
    cout<<"\nStudent "<<i+1<<" Info"<<endl;
    cout<<"Name: ";
    cin.ignore();
    getline(cin,students[i].name);

    cout<<"Section: ";
    cin>>students[i].section;

    cout<<"Roll: ";
    cin>>students[i].roll;

    int marks;
    cout<<"English Marks: ";
    cin>>marks;
    students[i].set_marks(marks);

    string pass;
    cout<<"Password: ";
    cin>>pass;
    students[i].set_password(pass);
}


//Update Section
cout<<"-------------------------"<<endl;
int given_roll, new_marks;
string given_password;

cout<<"Enter roll to update marks: "<<endl;
cin>>given_roll;

cout<<"Enter new marks: "<<endl;
cin>>new_marks;

cout<<"Enter Password: "<<endl;
cin>>given_password;

bool found=false;
for(int i=0; i<N; i++){
    if(students[i].roll==given_roll){
        found=true;
        students[i].update_marks(given_password,new_marks);
        cout<<"Marks Updated Successfully."<<endl;
        break;
    }
}
if(found==false){
    cout<<"Roll Not found."<<endl;
}

//Taking Output
cout<<"\n\n====== Student Details ======"<<endl;
for(int i=0; i<N; i++){
cout<<"\Student "<<i+1<<endl;
cout<<"Name: "<<students[i].name<<endl;
cout<<"Section: "<<students[i].section<<endl;
cout<<"Roll: "<<students[i].roll<<endl;
cout<<"English Marks: "<<students[i].get_marks()<<endl;
cout<<"------------------------------"<<endl;
}
}
