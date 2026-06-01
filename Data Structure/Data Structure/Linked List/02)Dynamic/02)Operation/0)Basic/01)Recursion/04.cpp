//Sum using recursion
#include<bits/stdc++.h>
using namespace std;
int recur(int n){
if(n==1){
    return n;
}
return n+recur(n-1);
}
int main(){
int n=3;
int r=recur(n);
cout<<r;
}
