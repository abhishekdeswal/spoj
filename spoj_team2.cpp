#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a[4],q=0;
    long long sum=0;
    while(scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]) != EOF)
    {
        sum=0;
        q++;
        int j=0,max1=a[0];
        for(int i=1;i<4;i++)
        {
            if(a[i]>max1)
            {
                max1=a[i];
                j=i;
            }
        }
        sum+=max1;
        max1=0;
        for(int i=0;i<4;i++)
        {
            if(i==j) continue;
            max1=max(a[i],max1);
        }
        sum+=max1;
        printf("Case %i: %lli\n",q,sum);
    }
}
