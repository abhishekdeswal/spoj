#include <cstdio>
using namespace std;
void merge(int a[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int l[n1+1],r1[n2+1];
    for(int i=0;i<n1;i++)
        l[i]=a[p+i];
    for(int i=0;i<n2;i++)
        r1[i]=a[q+i+1];
    l[n1]=1000;
    r1[n2]=1000;
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
        }
    }
}
void merge_sort(int a[],int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);
    }
}
int main()
{
    int n,k,x,y;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=0;
    for(int i=0;i<k;i++)
    {
        scanf("%d %d",&x,&y);
        for(int j=x;j<=y;j++)
            a[j]++;
    }
    merge_sort(a,0,n-1);
    printf("%d\n",a[n/2]);
}
