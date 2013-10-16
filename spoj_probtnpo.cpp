#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b;
    while(EOF)
    {
        scanf("%i %i",&a,&b);
        if(a>b) swap(a,b);
        int max1=0;
        for(int j=a;j<=b;j++)
        {
            int i=j,cnt=0;
            if(i>1)
            while(i!=1)
            {
                if(i%2==0) i=i/2;
                else i=(3*i+1);
                cnt++;
            }
            if(cnt>max1) max1=cnt;
        }
        printf("%i %i %i\n",a,b,max1+1);
    }
}
