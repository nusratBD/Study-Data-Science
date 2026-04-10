//String Modifier
#include<bits/stdc++.h>
using namespace std;
int main(){
string name="Tithi";
cout<<name<<endl;
name.assign("Nuha");
cout<<name<<endl;
string s1="Nusrat";
string s2="Hurain";
s1.append(s2);
cout<<s1<<endl;
s1.push_back('x');
cout<<s1<<endl;
s2.pop_back();
cout<<s2<<endl;
s2.insert(1,"Mimi");//কত নম্বর ইনডেক্সে string add করব
cout<<s2<<endl;
s2.erase(3,4);//কত নম্বর ইনডেক্স থেকে কতগুলো ক্যারেক্টার ডিলিট করব
cout<<s2<<endl;
//Swap
string a1="I love you.";
string a2="I hate you";
swap(a1,a2);
cout<<a1<<endl;//I hate you
cout<<a2<<endl;//I love you
}
