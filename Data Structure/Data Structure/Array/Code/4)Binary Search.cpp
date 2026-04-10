#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int x, int lb, int up){
    if(lb<=up){
        int mid=(lb+up)/2;
      //x==arr[MID]
      if(x==arr[mid]) return mid;//Center
      //x>arr[MID]
      else if(x>arr[mid]) binarySearch(arr,x,mid+1,up);//Right Side
      //x<arr[MID]
      else binarySearch(arr,x,lb,mid-1);//Left Side
    }
    else return -1;
}
int main(){
    int siz;
    cin>>siz;
    int arr[siz];
    for(int i=0; i<siz; i++){
        cin>>arr[i];
    }
    int checkValue;
    cout<<"Please Enter the value you want to search: "<<endl;
    cin>>checkValue;
    int indexNumber;
    indexNumber=binarySearch(arr,checkValue,0,siz-1);
    if(indexNumber!=-1){
        cout<<"Index: "<<indexNumber<<" Position: "<<indexNumber+1<<endl;
    }
    else{
        cout<<"Not Found."<<endl;
    }
}
