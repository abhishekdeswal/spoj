#include <cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%i",&t);
    int a[t],b[10001]={0},z=0,cnt=0;
    for(int i=0;i<t;i++)
    {
        int k,l;
        scanf("%i %i",&a[i],&k);
        for(int q=0;q<k;q++)
        {
            scanf("%i",&l);
            for(int w=0;w<z;w++)
            {
                if(b[w]==l) break;
                else if(w==z-1) {b[z]==l;cnt++;z++;}
            }
        }
    }
    printf("%i\n",cnt);
}
