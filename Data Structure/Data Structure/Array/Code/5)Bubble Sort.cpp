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
    cout<<"Before Sort: "<<endl;
    printArray(arr, siz);
    //Bubble Sort Implementation
    for(int i=1; i<siz; i++){
        int flag=0;
            cout<<"Iteration "<<i<<":"<<endl;
        for(int j=0; j<siz-i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
            printArray(arr,siz);
        }
        cout<<endl;
        if(flag==0) break;
    }
    cout<<"After Sort: "<<endl;
    printArray(arr, siz);
}
