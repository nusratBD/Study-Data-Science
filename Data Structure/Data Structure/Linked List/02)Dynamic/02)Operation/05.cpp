#include<iostream>
using namespace std;
void factorial(int n){
    if(n!=0){
        factorial(n-1);
        cout<<n<<" ";
    }
}
int main(){
factorial(5);
}
