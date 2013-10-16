#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       unsigned long long n,k;
        cin>>k>>n;
        if(n%32==0) cout<<"Female"<<endl;
        else
        {
            switch(n%12)
            {
            case 1:
            case 4:
            case 6:
            case 7:
            case 10:
            case 13:
            case 16:
            case 19:
            case 18:
            case 21:
            case 24:
            case 25:
            case 28:
            case 30:
            case 31:
            case 11:cout<<"Male"<<endl; break;
            default: cout<<"Female"<<endl; break;
            }
        }
    }
}
