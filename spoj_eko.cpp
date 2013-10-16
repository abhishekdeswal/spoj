#include <iostream>
using namespace std;
long tempsum(int a[],int x,int c)
{
    for(int i=0;i<c;i++)
    {
        long tempsum=0;
        for(int i=0;i<c;i++)
        if(a[i]-x>0) tempsum+=a[i]-x;
        return tempsum;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int h[n],x;
    unsigned long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
        sum+=h[i];
    }
    x=sum/n;
    a:
    if(tempsum(h,x,n)<m)
    {
        x++;
        goto a;
    }
    else if(tempsum(h,x,n)>m)
    {
        x--;
        goto a;
    }
    else cout<<x<<endl;
}
