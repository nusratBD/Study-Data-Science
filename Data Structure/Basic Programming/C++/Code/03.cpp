/*
1. Array
2. Character Array(String)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    };
    //Charcter Array
    char value[5]="abcd";
    cout<<value<<endl;
    //Character Array User Input
    char ar[5];
    cin>>ar;
    cout<<ar<<endl;
    //Character Array space input
    char ar2[50];
    cin.getline(ar2,50);
    cout<<ar2<<endl;
}


