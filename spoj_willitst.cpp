#include <iostream>
using namespace std;
int main()
{
    unsigned long long a;
    cin>>a;
    if(a==0 || a==1) cout<<"TAK";
    while(a>1)
    {
        if(a%2==0) a=a/2;
        else
        {
            if(a==3) {cout<<"NIE"; goto c;}
            a=a*3+3;
        }
    }
    cout<<"TAK";
    c:
        return 0;
}
