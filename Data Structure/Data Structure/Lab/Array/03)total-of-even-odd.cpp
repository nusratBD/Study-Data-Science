//ind the total of Even & Odd Numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,3,5,8, 7,12};
int total_even=0;
int total_odd=0;
for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
    if(arr[i]%2==0){
        total_even=total_even+arr[i];
    }
    else{
        total_odd=total_odd+arr[i];
    }
}
cout<<"Total of all even numbers: "<<total_even<<endl;
cout<<"Total of all odd numbers: "<<total_odd<<endl;
}
