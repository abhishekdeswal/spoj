#include <iostream>
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
    l[n1]=1000001;
    r1[n2]=1000001;
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
int mod(int a)
{
    if(a>0) return a;
    else return -1*a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,n2;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            merge_sort(a,0,n-1);
        cin>>n2;
        int b[n2];
        for(int i=0;i<n2;i++)
            cin>>b[i];
            int diff=mod(a[0]-b[0]);
        for(int j=0;j<n;j++)
        {
            if(a[j]==a[j-1]) continue;
            for(int i=0;i<n2;i++)
            {
                diff=min(diff,mod(a[j]-b[i]));
                if(diff==0) goto c;
            }
        }
        c:
            cout<<diff<<endl;
    }
}
