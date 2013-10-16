#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int t;
    scanf("%i",&t);
    while(t--)
    {
        int n;
        scanf("%i",&n);
        unsigned long long fct=n;
        int a=2*n-1;
        for(int i=0;i<n-1;i++)
        {
            fct*=(a-i);
            fct/=(i+1);
            if(i%1000000) fct=fct%1000000007;
        }
        cout<<fct<<endl;
    }
}
