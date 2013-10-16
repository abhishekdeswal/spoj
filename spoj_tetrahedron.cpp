#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int U,V,w,W,v,u;
        cin>>U>>V>>w>>W>>v>>u;
        double vol=1;
        long long X=(w-U+v)*(U+v+w),
            x=(U-v+w)*(v-w+U),
            Y=(u-V+w)*(V+w+u),
            y=(V-w+u)*(w-u+V),
            Z=(v-W+u)*(v+W+u),
            z=(W-u+v)*(u-v+W);
        double a = sqrt(x)*sqrt(Y)*sqrt(Z),
              b = sqrt(X)*sqrt(y)*sqrt(Z),
              c = sqrt(X)*sqrt(Y)*sqrt(z),
              d = sqrt(x)*sqrt(y)*sqrt(z);
        vol = (sqrt(-a+b+c+d)*sqrt(a-b+c+d)*sqrt(a+b-c+d)*sqrt(a+b+c-d))/(192*u*v*w);
        cout<<fixed<<setprecision(4)<<vol<<endl;
    }
    return 0;
}
