#include <cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%i",&t);
    int b=t%10;
    if(b==0) printf("%i\n",2);
    else printf("%i\n%i",1,b);
}
