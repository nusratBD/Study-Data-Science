//Traversal
#include<bits/stdc++.h>
using namespace std;
void PrintSize(int arr[], int siz){
for(int i=0; i<siz; i++){
    cout<<arr[i]<<" ";
}
}
int main(){
int arr[50];
int siz;
cout<<"Enter the size of the array: ";
cin>>siz;
for(int i=0; i<siz; i++){
    cin>>arr[i];
}
PrintSize(arr,siz);
/*================Insertion===============*/
int pos, val;
cout<<endl;
cout<<"Enter the position of the insertion: ";
cin>>pos;
cout<<"Enter the value of the insertion: ";
cin>>val;

if(pos<0||pos>siz){
    cout<<"Invalid Index";
}
else{
   //size-1----->pos
   /*for(int i=siz-1; i>=pos; i--){
    arr[i+1]=arr[i];
   }*/
   arr[siz]=arr[pos];
   arr[pos]=val;
}
cout<<"Array After the insertion: ";
PrintSize(arr,siz+1);
}
