//String Operation
#include<bits/stdc++.h>
using namespace std;
int main(){
string text="fffdddjkpbbbcibf";
cout<<text.find('b')<<endl;//first index of b
cout<<text.find_first_of('b')<<endl;//same as find
cout<<text.rfind('b')<<endl;//সবশেষ যে index এ b আছে।
cout<<text.find_last_of('b')<<endl;//same as rfind
cout<<text.find_first_not_of('f')<<endl;//প্রথম কোন ইন্ডেক্সে f পাওয়া যায় নি
cout<<text.find_last_not_of('f')<<endl;//শেষের দিক থেকে প্রথন কোন index এ f পাওয়া যায় নি।
string name="Nusrat Hurain";
cout<<name.substr(3,5);//কত নম্বর index থেকে কয়টা character কাটব।
}
