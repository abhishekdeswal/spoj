#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int t,o;
    scanf("%i",&t);
    while(t--)
    {
        long long n;
        cin>>n;
        if(n==1) {cout<<5<<endl; continue;}
        else if (n==2) {cout<<6<<endl; continue;}
        else
        {
            long long i=2;
            while((2*i-1)<=n)
            {
                i*=2;
            }
        for(;i>1;)
        {
            if(n>((i-2)+i/2))
                {cout<<6;
                n-=i;}
            else {cout<<5;n-=i/2;}
                i/=2;
        }
        cout<<endl;
        }

    }
}
