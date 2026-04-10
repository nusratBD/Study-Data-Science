//Constructor
#include<bits/stdc++.h>
using namespace std;
class Example{
public:
    int x;
    int y;
    int z;
    //Constructor
    Example(int a,int b, int c){
    x=a;
    y=b;
    z=c;
    }
};
int main(){
    //এটা object আবার function. এভাবে দিলে call করলে constructor টা run হবে।
    Example a(10,20,30);
    cout<<a.x<<" "<<a.y<<" "<<a.z<<endl;
}
