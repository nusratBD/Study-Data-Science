//Print array element
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={10,20,30,40,50,60};
for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
    cout<<arr[i]<<" ";
}
/*
sizeof(arr) gives the total number of bytes of the array, not the number of elements.

arr has 6 integers.
On most systems, int is 4 bytes.
So sizeof(arr) = 6 × 4 = 24 bytes.

This means your loop runs from i = 0 to i < 24, which is out of bounds and can cause undefined behavior
*/
cout<<endl;
}
