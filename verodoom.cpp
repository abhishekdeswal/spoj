#include <cstdio>
int main()
{
    int t;
    scanf("%i",&t);
    while(t--)
    {
        int n;
        scanf("%i",&n);
        unsigned long long sum=0;
        while(n>0)
        {
            sum+=3*((n*(n+1))/2);
            n--;
        }
        printf("%llu\n",sum);
    }
}
