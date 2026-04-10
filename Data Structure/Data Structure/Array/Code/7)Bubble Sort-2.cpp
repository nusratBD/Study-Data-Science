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
//Bubble Sort
for(int i=0; i<siz; i++){
        cout<<"Iteration: "<<i+1<<endl;
        int flag=0;
    for(int j=0; j<siz-i-1; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag=1;
        }
        printArray(arr,siz);
cout<<endl;
    }
    if(flag==0) break;
}
cout<<"After Sorting: "<<endl;
printArray(arr,siz);
cout<<endl;
}

