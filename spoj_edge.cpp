#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    string a;
    while(cin>>a)
    {
        printf("300 420 moveto\n310 420 lineto\n");
        int x=310,y=420,dir=1;
        for(int i=0;i<a.length();i++)
        {
            if(dir==1)
            {
                if(a[i]=='A')
                {
                    y-=10;
                    dir=2;
                }
                else if(a[i]=='V')
                {
                    y+=10;
                    dir=4;
                }
            }
            else if(dir==2)
            {
                if(a[i]=='A')
                {
                    x-=10;
                    dir=3;
                }
                else if(a[i]=='V')
                {
                    x+=10;
                    dir=1;
                }
            }
            else if(dir==3)
            {
                if(a[i]=='A')
                {
                    y+=10;
                    dir=4;
                }
                else if(a[i]=='V')
                {
                    y-=10;
                    dir=2;
                }
            }
            else
            {
                if(a[i]=='A')
                {
                    x+=10;
                    dir=1;
                }
                else if(a[i]=='V')
                {
                    x-=10;
                    dir=3;
                }
            }
                printf("%i %i lineto\n",x,y);
        }
        printf("stroke\nshowpage\n");
    }
}
