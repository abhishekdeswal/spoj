#include <cstdio>
#include <iostream>
using namespace std;
int med(long long a[],int n)
{
    if(n%2==0) return (a[n/2]+a[n/2-1])/2;
    return a[n/2];
}
void sltsort(long long a[],int n)
{
    for(int j=1;j<n;j++)
    {
        int key=a[j];
        int i=j-1;
        while(i>=0 && a[i]>key)
        {
            a[i+1] = a[i];
            i--;
        }
        a[i+1]=key;
    }
}
int mod(int a)
{
    if(a>0) return a;
    else return -1*a;
}
int main()
{
    int t;
    scanf("%i",&t);
    while(t--)
    {
        int n;
        scanf("%i",&n);
        long long a[n],median,cnt=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n>1){
        sltsort(a,n);
        median=med(a,n);
        for(int i=0;i<n;i++)
        {
            if(median==a[i]) cnt++;
        }}
        if(cnt<=(n/2-1))
        printf("%i\n",((n/2)+1-cnt));
        else printf("%i\n",0);
    }
}
