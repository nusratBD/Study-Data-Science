/*
তোমাকে একটি array দেওয়া আছে:
arr = {3, 1, 4, 1, 5, 9, 2}

এখন তোমাকে নিচের query গুলোর sum বের করতে হবে:
1️)index 0 থেকে 3 পর্যন্ত sum কত?
2️)ndex 2 থেকে 5 পর্যন্ত sum কত?
3️)index 1 থেকে 6 পর্যন্ত sum কত?
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[] = {3, 1, 4, 1, 5, 9, 2};
int n=sizeof(arr)/sizeof(arr[0]);
int pre[n];
pre[0]=arr[0];
for(int i=1; i<n; i++){
    pre[i]=arr[i]+pre[i-1];
}
cout<<"Sum of 0 to 3 index = "<<pre[3]<<endl;
cout<<"Sum of 2 to 5 index = "<<pre[5]-pre[1]<<endl;
cout<<"Sum of 1 to 6 index = "<<pre[6]-pre[0]<<endl;
}
