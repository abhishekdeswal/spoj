#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t,n,i=0;
    const int a[24]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608};
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2!=0)
        {
            cout<<n<<endl;
            continue;
        }
        int b[24] = {0};
        while(n>0)
        {
            for(i=0;a[i]<=n;i++)
                continue;
            i--;
            n-=a[i];
            b[i] = 1;
        }
        for(i=23;b[i]!=1;i--)
            continue;
        for(int j=0;i>-1;j++,i--)
        {
            n+=b[i]*a[j];
        }
        cout<<n<<endl;
    }
}
