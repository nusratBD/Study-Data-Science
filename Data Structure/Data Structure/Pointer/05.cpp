#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int *ptr=&arr[3];
cout<<"Index 3: "<<*ptr<<endl;
cout<<"Index 4: "<<*ptr+1<<endl;
cout<<"Index 2: "<<*ptr-1<<endl;
}
