#include <cstdio>
#include <iostream>
using namespace std;
long long inversions(int a[],int p,int q,int r)
{
    long long cnt=0;
    int n1=q-p+1;
    int n2=r-q;
    int l[n1+1],r1[n2+1];
    for(int i=0;i<n1;i++)
        l[i]=a[p+i];
    for(int i=0;i<n2;i++)
        r1[i]=a[q+i+1];
    l[n1]=10000001;
    r1[n2]=10000001;
    int i=0,j=0;
    for(int k=p;k<r+1;k++)
    {
        if(l[i]<=r1[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=r1[j];
            j++;
            cnt++;
        }
    }
    return cnt;
}
long long merge_inv(int a[],int p,int r)
{
    long long inv=0;
    if(p<r)
    {
        int q=(p+r)/2;
        inv+=merge_inv(a,p,q);
        inv+=merge_inv(a,q+1,r);
        inv+=inversions(a,p,q,r);
    }
    return inv;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        printf("%lld\n",merge_inv(a,0,n-1));
    }
}
