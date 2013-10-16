#include <cstdio>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        unsigned long long r;
        scanf("%llu",&r);
        printf("Case %d : %llu\n",i,4*r*r);
    }
}
