//String Size
#include<bits/stdc++.h>
using namespace std;
int main(){
string name="Nusrat";
cout<<name.length()<<endl;
cout<<name<<": "<<name.size()<<endl;
name.resize(3);
cout<<name<<": "<<name.size()<<endl;
name.clear();
cout<<name<<": "<<name.size()<<endl;
bool x=name.empty();
cout<<x<<endl;//1(True. that means string is empty.)
}
