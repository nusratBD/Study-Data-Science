//Sum of Diagonal Matrix
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter the size of matrix: ";
cin>>n;
int a[n][n];
//Input
cout<<"Enter Matrix elements: "<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>a[i][j];
    }
    cout<<endl;
}
int diagonalSum=0;
for(int i=0; i<n; i++){
    diagonalSum+=a[i][i];
}
cout<<"The sum of Diagonal Matrix: "<<diagonalSum<<endl;
}
