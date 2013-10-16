#include <cstdio>
#include <iostream>
using namespace std;
void merge(int,int,int,int []);
void merge_sort(int low,int high,int a[])
{
 int mid;
 if(low<high)
 {
  mid=(low+high)/2;
  merge_sort(low,mid,a);
  merge_sort(mid+1,high,a);
  merge(low,mid,high,a);
 }
}
void merge(int low,int mid,int high,int a[])
{
 int h,i,j,b[50],k;
 h=low;
 i=low;
 j=mid+1;

 while((h<=mid)&&(j<=high))
 {
  if(a[h]<=a[j])
  {
   b[i]=a[h];
   h++;
  }
  else
  {
   b[i]=a[j];
   j++;
  }
  i++;
 }
 if(h>mid)
 {
  for(k=j;k<=high;k++)
  {
   b[i]=a[k];
   i++;
  }
 }
 else
 {
  for(k=h;k<=mid;k++)
  {
   b[i]=a[k];
   i++;
  }
 }
 for(k=low;k<=high;k++) a[k]=b[k];
}

int main()
{
    int t;
    scanf("%i",&t);
    while(t--)
    {
        int n,m;
        scanf("%i %i",&n,&m);
        int a[n],cnt=0;
        for(int i=0;i<n;i++)
            scanf("%i",&a[i]);
        merge_sort(0,n,a);
        for(int i=0,j=n-1;i<j;)
        {
            if((a[i]+a[j])>m) j--;
            else if((a[i]+a[j])==m) {cnt++; i++; j--;}
            else i++;
        }
        printf("%i\n",cnt);
    }
}
