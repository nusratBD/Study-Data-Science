#include<bits/stdc++.h>
using namespace std;
int main(){
for(int i=1; i<49; i++){
    int flag=0;
    for(int j=2; j<i; j++){
        if(i%j==0){
            flag=0;
            break;
        }else{
        flag=1;
        }
    }
    if(flag==1){
        cout<<i<<" ";
    }
}
}
