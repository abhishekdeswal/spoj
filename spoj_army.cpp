#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2,max1=0,max2=0,a;
        cin>>n1>>n2;
        int z=n1;
        while(z--)
        {
            cin>>a;
            max1=max(max1,a);
        }
        z=n2;
        while(z--)
        {
            cin>>a;
            max2=max(max2,a);
        }
        if(max1>=max2) cout<<"Godzilla"<<endl;
        else cout<<"MechaGodzilla"<<endl;
    }
}
