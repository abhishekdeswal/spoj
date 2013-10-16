#include <iostream>
using namespace std;
int main()
{
        int n,n2=0,n3=0,n1=0,cnt=0;
        cin>>n;
        string a;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            if(a=="1/4") n1++;
            else if(a=="1/2") n2++;
            else if(a=="3/4") n3++;
        }
        cnt=n3;
        n1-=n3;
        cnt+=n2/2;
        if(n2%2)
        {
            cnt++;
            n1-=2;
        }
        if(n1>0)
        {
            cnt+=n1/4;
        }
        if(n1%4>0)
        {
            cnt++;
        }
        cout<<cnt+1<<endl;
}
