//Find the Largest & Lowest
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={40, 56, 10, 35, 73, 21};
    int largest=arr[0];
    int lowest=arr[0];
    for(int i=1; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"The Largest value of the array is: "<<largest<<endl;
    for(int i=1; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i]<lowest){
            lowest=arr[i];
        }
    }
    cout<<"The Lowest value of the array is: "<<lowest<<endl;
}
