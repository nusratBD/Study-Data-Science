#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f=0;
    int s=1;
    for(int i=1; i<=20; i++)
    {
        cout<<f<<" ";
        int t=f+s;
        f=s;
        s=t;
    }
}
