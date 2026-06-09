/*
৩. সংখ্যাটি প্রাইম বা মৌলিক কি না? (Check Prime Number)
টাস্ক: একটি সংখ্যা n মৌলিক কি না তা রিকার্সন দিয়ে চেক করো। ফাংশনটি দেখতে এমন হতে পারে: bool isPrime(int n, int i).

সাহায্যকারী হিন্ট: এখানে i শুরু হবে ২ থেকে। বেস কেস হবে একাধিক: যদি n % i == 0 হয় তবে false, আর i * i > n হয়ে গেলে true।

রিটার্ন টাইপ: bool (true অথবা false)
*/
#include<bits/stdc++.h>
using namespace std;
bool recur(int n, int i)
{
    if(i<n && n%i==0)
    {
        return false;
    }
    else if(n==i)
    {
        return true;
    }
    return recur(n,i+1);
}
int main()
{
    bool r=recur(12,2);
    if(r==true)
    {
        cout<<"Prime."<<endl;
    }
    else
    {
        cout<<"Not a Prime."<<endl;
    }
}
