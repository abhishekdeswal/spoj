#include <cstdio>
using namespace std;
int mod(int a)
{
    if(a>0) return a;
    return -1*a;
}
int main()
{
    int t;
    scanf("%i",&t);
    while(t--)
    {
        int l,n,m,x;
        scanf("%i %i",&l,&n);
        int a[n][3];
        for(int i=0;i<n;i++)
            for(int j=0;j<3;j++)
                scanf("%i",&a[i][j]);
        scanf("%i",&m);
        for(int i=0;i<m;i++)
        {
            int j=1;
            scanf("%i",&x);
            for(;j<=l;j++)
                for(int l=0;l<n;l++)
                    if(mod(a[l][0]-j)<=a[l][1]) {x-=a[l][2];
                    if(x<=0) goto q;}
            printf("Bloon leakage\n");
            continue;
            q:
                printf("%i\n",j);
                continue;
        }
    }
}
