#include <iostream>
#include <cmath>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        scanf("%ill",&n);
        unsigned long long sum=1;
        while(n>30)
        {
            sum*=2147483648;
                sum%=1000000007;
            n-=31;
        }
        sum*=pow(2,n-1);
        printf("%ill \n",(sum)%1000000007);
    }
}
