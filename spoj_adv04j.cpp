#include <cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%i",&t);
    while(t--)
    {
        int n,k=1,i=1;
        scanf("%i",&n);
        for(;k<n;i++)
            k*=2;
        printf("%i\n",i);
    }
}
