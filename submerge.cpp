#include <iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b) return a;
    return b;
}
int main()
{
    while(1)
    {
        int n,m,x=0,max1,cnt=0;
        cin>>n>>m;
        if(n==0 && m==0) break;
        int a[m];
        for(int i=0;i<m;i++)
            a[i]=0;
        for(int i=0;i<2*m;i++)
        {
            cin>>x;
            a[x-1]++;
        }
        max1=a[0];
        for(int i=1;i<m;i++)
        {
            max1=max(max1,a[i]);
        }
        for(int i=0;i<m;i++)
        {
            if(a[i]==max1) cnt++;
        }
        if(cnt>=m-1) cout<<0<<endl;
        else cout<<cnt<<endl;
    }
}
