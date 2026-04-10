/*String
1) create string
2) Dynamic size and maximum size
3) specific size with specific character
4) Copy string
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
string name="Nusrat Hurain";//capacity 15
//cout<<name<<endl;
//string name="Nusrat Hurain Nuha";//capacity 18
name="Nusrat Hurain Nuha";
cout<<name.capacity()<<endl;//capacity 30
string st1;
cout<<st1.capacity()<<endl;
cout<<st1.max_size()<<endl;
//10 z.
string st2(10,'z');
cout<<st2<<endl;
string s3="hello";
string s4="gello";
//copy string
s3=s4;
cout<<s3<<endl;
string s5="Hello";
string s6="Welcome";
//Concatenation
cout<<s5+" "+s6<<endl;
}
