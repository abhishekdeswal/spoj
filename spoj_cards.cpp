#include <cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%i",&t);
    while(t--)
    {
        long long n;
        scanf("%lli",&n);
        printf("%lli\n",((n*(3*n+1)/2)%1000007));
    }
}
