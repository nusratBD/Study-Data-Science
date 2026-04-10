#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    int result=1;
    for(int i=1; i<=n; i++){
        result=result*i;
    }
    cout<<"The factorial value of "<<n<<" is: "<<result<<endl;
}
