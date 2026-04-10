//min(), max()
#include<bits/stdc++.h>
using namespace std;
int main(){
/*int a=10, b=100, c=250, d=500;
int mn=min(a,b);
int mx=max(a,b);
int mx2=max(max(max(a,b),c),d);
cout<<"The Minimum value is: "<<mn<<endl;
cout<<"The Maximum value is: "<<mx<<endl;
cout<<"The Maximum value among all the numbers: "<<mx2<<endl;*/
//Minimum in an array: Manual
/*int a[5]={5,3,1,2,9};
int mn2=a[0];
for(int i=1; i<5; i++){
    if(mn2>a[i]){
        mn2=a[i];
    }
}
cout<<mn2<<endl;*/
//Maximum in array: Manual
/*int a[5]={5,3,1,2,9};
int mx2=a[0];
for(int i=1; i<5; i++){
    if(mx2<a[i]){
        mx2=a[i];
    }
}
cout<<mx2<<endl;*/
//Minimum in array using min method
/*int a2[5]={5,3,1,2,9};
int min3=a2[0];
for(int i=1; i<5; i++){
    min3=min(min3,a2[i]);
}
cout<<min3<<endl;*/
//Maximum in array using max method
int a3[5]={5,3,1,2,9};
int max3=a3[0];
for(int i=1; i<5; i++){
    max3=max(max3,a3[i]);
}
cout<<max3<<endl;
}
