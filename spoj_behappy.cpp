#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
long long fact(int a,int b){
  int n = a+b-1;
  int r = b-1,i=0;
  if(n<=0||r<=0) return 0;
  long long result=1;
  if (r > n/2) {
    r = n - r;
  }
  for (i = 0; i < r; i++) {
    result *= (n-i);
    result /= (i+1);
  }
  return pow(-1,b)*result;
}
int main()
{
    int a,b;
    while(1)
    {
        scanf("%i %i",&a,&b);
        if(a==0&&b==0) break;
        int q[a][2],sum=0;
        for(int i=0;i<a;i++)
        {
            scanf("%i %i",&q[i][0],&q[i][1]);
            b-=q[i][0];
        }
        long long fct=fact(a,b);
        for(int i=0;i<a;i++)
        {
            int x=0;
            for(int j=i;j<a;j++)
            {
                x+=q[j][1]-q[j][0]+1;
                if(x<=b)
                fct+=pow(-1,j-i+1)*fact(a,b-x);
            }
        }
        cout<<fct<<endl;
    }

}
