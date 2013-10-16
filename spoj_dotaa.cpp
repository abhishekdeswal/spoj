#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,d,h,cnt=0;
        cin>>n>>m>>d;
        for(int j=0;j<n;j++)
        {
            cin>>h;
            while(h>d)
            {cnt++;
                h-=d;
            }
        }
        if(cnt>=m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
