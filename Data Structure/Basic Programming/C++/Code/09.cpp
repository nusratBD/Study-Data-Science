//Get by row or column from 2D array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3]={
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };
//Get row
int row=2;
int n=3;
cout<<"The "<<row<<"th row is: "<<endl;
for(int j=0; j<n; j++){
    cout<<a[row][j]<<" ";
}
cout<<endl;
//Get Column
int col=1;
cout<<"The "<<col<<"th col is: "<<endl;
for(int i=0; i<n; i++){
    cout<<a[i][col]<<endl;
}
}
