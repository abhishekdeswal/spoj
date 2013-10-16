#include <cstdio>
using namespace std;
unsigned long long coin(int n)
{
    unsigned long long sum=0;
    if((n/2+n/3+n/4)<n) return n;
    else sum+=coin(n/2)+coin(n/3)+coin(n/4);
    return sum;
}
int main()
{
    for(int i=0;i<10;i++)
    {
    int t;
    scanf("%i",&t);
    if(t==0) {printf("0\n"); continue;}
    printf("%lli\n",coin(t));
    }
}
