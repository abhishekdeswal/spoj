#include <iostream>
using namespace std;
int min(int a,int b)
{
    if(a<b) return a;
    return b;
}
int main()
{
    unsigned long long n;
    while(true){
            cin>>n;
    if(n==0) return 0;
    long long sum=0;
    int a,b,c,hcf;
        cin>>a>>b>>c;
        sum+=a*b*c;
        hcf=min(min(a,b),c);
        n--;
    while(n--)
    {
        cin>>a>>b>>c;
        sum+=a*b*c;
        if(hcf==1) continue;
        else
            {int z=min(min(a,b),c);
            if((a%z==0)&& b%z==0 && c%z==0) hcf=min(hcf,z);}
    }
    cout<<sum/(hcf*hcf*hcf)<<endl;
}}

