#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
     printf("%.0f\n", 1234567890123456789.0);
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,s,d=0;
        cin>>a>>b>>s;
        long long a1=b-a,a7=a+b,c=6*a7+a1-2*s;
        long long x1=int(sqrt(c*c-24*a1*a7))-c;
        if(x1%12==0) d==x1/12;
        else d=(x1-2*int(sqrt(c*c-24*a1*a7)))/12;
        if(d==0)
        {
            a7=s/a;
            a1=a;
        }
        else
        {
            a7=a1/d+6;
            a1=a-2*d;
        }
        cout<<a7<<endl;
        for(int i=0;i<a7;i++)
        {
            cout<<a1+i*d<<" ";
        }
        cout<<endl;
    }
}
