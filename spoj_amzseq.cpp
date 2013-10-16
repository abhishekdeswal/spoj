#include <cstdio>
int main()
{
    int n;
    scanf("%i",&n);
    int a[n],b[n],c[n],i=0;
    a[0]=b[0]=c[0]=1;
    if(n==0) {printf("1"); return 0;}
    n--;
    while(n--)
    {
        i++;
        a[i]=a[i-1]+b[i-1];
        b[i]=a[i-1]+b[i-1]+c[i-1];
        c[i]=a[i-1]+b[i-1];
    }
    printf("%i",a[i]+b[i]+c[i]);
}
