/*
৪. অ্যারের উপাদানগুলোর যোগফল (Sum of Array Elements)
টাস্ক: একটি অ্যারো এবং তার সাইজ দেওয়া থাকবে। রিকার্সন ব্যবহার করে অ্যারের সব উপাদানের যোগফল বের করো।

সাহায্যকারী হিন্ট: ফাংশন সিগনেচার হতে পারে int arraySum(int arr[], int size). প্রতিবার শেষ উপাদানটিকে হাতে রেখে সাইজ এক কমিয়ে size - 1 এর জন্য কল করবে।

রিটার্ন টাইপ: int
*/
#include<bits/stdc++.h>
using namespace std;
int recur(int arr[],int n){
if(n<0){
    return 0;
}
return arr[n]+recur(arr, n-1);
}
int main(){
    int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
int r=recur(arr,n-1);
cout<<r;
}
