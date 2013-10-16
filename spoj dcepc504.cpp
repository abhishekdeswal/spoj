#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int t;
    long long int n,k;
    int count;
    scanf("%d",&t);
    while(t--)
    {
        count = 0;
        scanf("%lld %lld",&n,&k);
        if (k == 1) printf("Male\n");
        else if (k == 2) printf("Female\n");
        else
        {
            k--;
            while(k > 1)
            {
                if(k%2!=0)
                    count++;
                k/=2;
            }
            if (count%2!=0)
                printf("Male\n");
            else printf("Female\n");
        }
    }
}
