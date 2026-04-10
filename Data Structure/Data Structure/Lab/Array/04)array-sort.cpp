#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5]={7, 3, 9,4,5};
cout<<"Original Array: ";
for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0; i<5; i++){
    for(int j=i+1; j<5; j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
           }
    }
}
cout<<"Sorted Array: ";
for(int i=0; i<5;i++){
    cout<<arr[i]<<" ";
}
}
