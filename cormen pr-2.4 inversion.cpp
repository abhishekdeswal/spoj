#include <iostream>
using namespace std;
void merge(int a[],int p,int q,int r,int& cnt)
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
            cnt++;
        }
    }
}
void merge_sort(int a[],int p,int r,int& cnt)
{
    if(p<r)
    {
        int q=(p+r)/2;
        merge_sort(a,p,q,cnt);
        merge_sort(a,q+1,r,cnt);
        merge(a,p,q,r,cnt);
    }
}

int main()
{
    int a[5]={2,3,8,6,1};
    int cnt=0;
    merge_sort(a,0,4,cnt);
    for(int i=0;i<5;i++)
        cout<<a[i]<<endl;
    cout<<cnt<<endl;
}
