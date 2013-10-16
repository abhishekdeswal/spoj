#include <iostream>
using namespace std;
int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        int sum=1,i=0;
        for(;sum<=n;i++)
        {
            sum*=2;
        }
        cout<<i-1<<endl;
    }
}
