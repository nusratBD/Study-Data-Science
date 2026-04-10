//Encapsulation and Access Modifier
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int x;
private:
    int y;
protected:
    int z;
};
int main(){
    Student s1;
    s1.x=10;
    //s1.y=20; Can not access private data
    //s1.z=30; Can not access protected data
}
