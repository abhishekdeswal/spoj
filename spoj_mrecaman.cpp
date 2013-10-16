#include <cstdio>
using namespace std;
int main()
{
    long long a[500001];
    a[0]=0;
    for(int i=1;i<500001;i++)
    {
        long long b=a[i-1]-i;
        if(b>0)
        {
            for(int j=0;j<i;j++)
            {
                if(b==a[j]) goto w;
                else if(j==i-1) goto q;
            }
        }
        else goto w;
        q: {a[i]=b;continue;}
        w: {a[i]=a[i-1]+i;continue;}
    }
    int k;
    while(true)
    {
        scanf("%i",&k);
        if(k==-1) break;
        printf("%lli\n",a[k]);
    }
}
