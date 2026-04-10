//Deletion
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
/*================Deletion===============*/
int pos, val;
cout<<endl;
cout<<"Enter the position of the deletion: ";
cin>>pos;

if(pos<0||pos>siz){
    cout<<"Invalid Index";
}
else{
   //last position
   if(pos==siz-1) siz--;
   else{
    //start or middle position
    for(int i=pos+1; i<siz; i++){
        arr[i-1]=arr[i];
    }
    siz--;

   }
}
cout<<"Array After the insertion: ";
PrintSize(arr,siz);
}


