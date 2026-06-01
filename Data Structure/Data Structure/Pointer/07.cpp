#include<bits/stdc++.h>
using namespace std;
int sum(int *a, int size){
int sum=0;
for(int i=0; i<size; i++){
    sum+=*a+i;
}
return sum;
}
int main(){
    int size=3;
    int arr[size]={1,2,3};
    int result=sum(arr, size);
    cout<<"Sum: "<<result<<endl;
}
