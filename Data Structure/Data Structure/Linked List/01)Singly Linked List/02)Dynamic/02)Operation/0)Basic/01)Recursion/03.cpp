//Print 5 to 1
#include<bits/stdc++.h>
using namespace std;
int recur(int n){
if(n==0){
    return 0;
}
cout<<n<<" ";
return recur(n-1);
}
int main(){
int n=5;
recur(5);
}
