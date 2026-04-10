#include<bits/stdc++.h>
using namespace std;
int main(){
int values[30]={3,4,8,9,4};
cout<<"Enter the search value: ";
int search_value;
cin>>search_value;

bool flag=0;
for(int i=0; i<5; i++){
 if(values[i]==search_value){
    flag=1;
    cout<<i<<" th index, "<<i+1<<"th position."<<endl;
 }
}
if(flag==0){
    cout<<"Not found.";
}
}
