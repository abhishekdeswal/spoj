#include<cstdio>
using namespace std;
void fact(int);
int main()
  {
  	int n,x;
	scanf("%i",&n);
  	while(n--)
  	{
  	    scanf("%i",&x);
  	    fact(x);
  	    printf("\n");
  	}
  	return 0;
  }
void fact(int n)
{
    int i,j,digits=0,temp,a[200]={0},x;
    a[0]=1;
    digits=1;
    for(j=1;j<=n;j++)
    {
        temp=0;
        for(i=0;i<digits;i++)
        {
            x=a[i]*j+temp;
            a[i]=x%10;
            temp=x/10;
        }
        while(temp>0)
        {
            a[digits++]=temp%10;
            temp/=10;

        }

    }
    for(i=digits-1;i>=0;i--)
            printf("%i",a[i]);
}
