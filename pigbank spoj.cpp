#include <iostream>
void sort(int a[][],int a,int b)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            if(a[i][0]>a[j][0])
            {
                swap(a[i][0],a[j][0]);
                swap(a[i][1],a[j][1]);
            }
        }
}
void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int e,f;
        cin>>e>>f;
        int n;
        cin>>n;
        int a[n][2];
        for(int i=0;i<n;i++)
            cin>>a[0]>>a[1];
    }
}
