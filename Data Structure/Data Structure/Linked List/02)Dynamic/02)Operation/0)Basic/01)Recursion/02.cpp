//Print 1 to 5 using recursion
#include<bits/stdc++.h>
using namespace std;
int recur(int n)
{
    if(n==0)
    {
        return 1;
    }
    recur(n-1);
    cout<<n<<" ";
}
int main()
{
    int n=5;
    int x=recur(n);
    cout<<endl;
    cout<<x;//Garbage Value
}
