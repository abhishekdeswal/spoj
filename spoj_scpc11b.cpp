#include <iostream>
#include <cstdio>
using namespace std;
void sort1(int a[],int n)
{
    for(int j=1;j<n;j++)
    {
        int key=a[j];
        int i=j-1;
        while(i>=0 && a[i]>key)
        {
            a[i+1] = a[i];
            i--;
        }
        a[i+1]=key;
    }
}
int main()
{
    int n;
    while(1)
    {
        scanf("%i",&n);
        if(n==0) break;
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%i",&a[i]);
        }
        sort1(a,n);
        if(a[0]!=0) goto q;
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>200) goto q;
        }
        if(2*(1422-a[n-1])>200) goto q;
        else goto w;
        q:
            cout<<"IM";
        w:
            cout<<"POSSIBLE"<<endl;
    }

}
