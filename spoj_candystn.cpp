#include <cstdio>
using namespace std;
int max(int a, int b)
{
    if(a>b) return a;
    return b;
}
int min(int a, int b)
{
    if(a<b) return a;
    return b;
}
int main()
{
    int t;
    scanf("%i",&t);
    while(t--)
    {
        int n,m,a1,a2,cl=0,bg,clmax=0,bgmax=0;
        scanf("%i %i",&n,&m);
        scanf("%i %i",&a1,&a2);
        cl=clmax=a1-a2;
        bg=bgmax=n+a1-a2;
        a1=a2;
        for(int i=2;i<m;i++)
        {
            scanf("%i",&a2);
            cl-=a2-a1;
            bg+=a1-a2;
            if(a1==a2) cl++;
            clmax=max(clmax,cl);
            bgmax=min(bgmax,bg);
            a1=a2;
        }
        if(clmax<0) clmax=0;
        if(bgmax<clmax+1) printf("-1\n");
        else {
        printf("%i\n",(clmax+1));}
    }
}
