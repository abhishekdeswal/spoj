#include <cstdio>
#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    scanf("%lld %lld",&n,&m);
    long long a[n];
    unsigned long long sum=0,sm=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    int i=0,j=0;
    w:
    while(i<n)
    {
        if(sum+a[i]>m) break;
        else sum+=a[i++];
    }
    sm=max(sm,sum);
    if(i==n || sm==m) goto q;
    else
    {
        sum-=a[j++];
        goto w;
    }
    q:
        printf("%lld",sm);
        return 0;
}
