//factorial using recursion
/*
recursion function এ যদি if ছাড়া অন্য কোন return থাকে, তাহলে if এর
ভেতর লাস্ট যে ভ্যালুটা থাকে সেটা শেষ return এ গিয়ে জমা হয়।
*/
#include<bits/stdc++.h>
using namespace std;
int recursion(int n){
    if(n==1){
        return 1;
    }
    return n*recursion(n-1);
}
int main(){
int n=5;
int result=recursion(5);
cout<<result;
}
/*
return 1
return 2*recur(1)
return 3*recur(2)
return 4*recur(3)
return 5*recur(4)
*/
