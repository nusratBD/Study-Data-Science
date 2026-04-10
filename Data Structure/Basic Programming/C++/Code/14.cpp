//getter, setter
#include<bits/stdc++.h>
using namespace std;
class Example{
private:
    int x;
public:
    void setter(int a){
    x=a;
    }
    int getter(){
    return x;
    }
};
int main(){
    Example a;
    //set private data
    a.setter(10);
    //get private data
    int r=a.getter();
    cout<<r<<endl;
}
