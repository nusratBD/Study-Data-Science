//2D Array
#include<bits/stdc++.h>
using namespace std;
int main(){
//1.2D array ডিক্লেয়ার (declare)
//int matrix[3][4];
//2. ডাটা ইনিশিয়ালাইজ (initialize):
int a[3][3]={
{1,2,3},
{4,5,6},
{7,8,9}
};
//Access Value
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}
