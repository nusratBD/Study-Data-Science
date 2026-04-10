//sort() method
#include<bits/stdc++.h>
using namespace std;
int main(){
int a[]={4,8,3,2,9};
int n=5;
sort(a,a+n);
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}
}
