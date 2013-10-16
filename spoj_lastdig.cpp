#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        a=a%10;
        if(a==0) cout<<0<<endl;
        else if (b==0) cout<<1<<endl;
        else
        {
            b%=4;
            if(b>0) cout<<int(pow(a,b))%10<<endl;
            else cout<<int(pow(a,4))%10<<endl;
        }
    }
}
