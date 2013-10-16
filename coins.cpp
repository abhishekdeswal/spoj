#include <iostream>
using namespace std;
long long max(long long a,long long b)
{
    if(a>b) return a;
    return b;
}
int coins(long long a)
{
    if(a<12) return a;
    else if(a<14) return 13;
    long long max1=a/4+a/3+a/2;
    return max(max1,coins(a/2)+coins(a/3)+coins(a/4));
}
int main()
{
    int t=10;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<coins(n)<<endl;
    }
}
