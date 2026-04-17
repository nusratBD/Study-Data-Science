#include<bits/stdc++.h>
using namespace std;
int main(){
char text[]="    Hello Bangladesh    ";
int start=0;
int start2=0;
while(text[start]==' '){
    start++;
}
cout<<start<<endl;
while(text[start2]!='\0'){
    start2++;
}
cout<<start2<<endl;
start2--;
while(text[start2]==' '){
    start2--;
}
cout<<start2<<endl;
for(int i=start; i<=start2; i++){
    cout<<text[i];
}
}
