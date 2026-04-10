#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int siz){
    for(int i=0; i<siz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
int siz;
cin>>siz;
int arr[siz];
for(int i=0; i<siz; i++){
    cin>>arr[i];
}
cout<<"Before Sorting: "<<endl;
printArray(arr,siz);
cout<<endl;
//Insertion Sort
for(int i=1; i<siz; i++){
    int j=i-1;
    int key=arr[i];
    if(arr[j]>key && key>=0){
        arr[j+1]=arr[j];
        j--;
    }
   arr[j+1]=key;
}
cout<<"After Sorting: "<<endl;
printArray(arr,siz);
cout<<endl;
}
