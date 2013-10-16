#include<cstdio>
#include<cmath>
using namespace std;
bool isPrime(int n)
{

}
int main()
{
    int t;
    scanf("%i",&t);
    for(int i=0;i<t;i++)
    {
        int a,b;
        scanf("%i %i",&a,&b);
        for(int n=a;n<=b;n++)
        {
            if(n<2) continue;
            else if(n<4) printf("%i\n",n);
            else if(n%2==0) continue;
            else {
            for(int d=3;d<=int(sqrt(n));d+=2)
                if(n%d==0) goto q;
            printf("%i\n",n);}
            q:
                continue;
        }
        printf("\n");
    }
}

