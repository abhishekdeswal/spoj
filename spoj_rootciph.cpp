#include <cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("%lld\n",a*a-2*b);
    }
    return 0;
}
