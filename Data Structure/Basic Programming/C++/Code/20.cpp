//iterator and auto
#include<bits/stdc++.h>
using namespace std;
int main(){
string st="abcdefgh";
//iterator
string::iterator it;
for(it=st.begin(); it!=st.end(); it++){
    cout<<*it<<endl;
}
cout<<"---------------------"<<endl;
//reverse iterator
string::reverse_iterator rit;
for(rit=st.rbegin(); rit!=st.rend(); rit++){
    cout<<*rit<<endl;
}
cout<<"-----------------------"<<endl;
//auto
string st2="Nusrat";
for(auto it=st2.begin();it!=st2.end();it++){
    cout<<*it<<endl;
}
cout<<"-----------------------"<<endl;
for(auto it=st2.rbegin(); it!=st2.rend(); it++){
    cout<<*it<<endl;
}
}
