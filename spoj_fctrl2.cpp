#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int q=0;q<t ;q++)
    {
        int n;
        cin>>n;
        int a[200]={0};
        int carry=0,digits=1,i,j;
        a[0]=1;
        for(i=1;i<=n;i++)
        {
            carry=0;
            for(j=0;j<digits;j++)
            {
                a[j]=a[j]*i+carry;
                carry=a[j]/10;
                a[j]%=10;
            }
            while(carry>0)
            {
                a[digits++]=carry%10;
                carry/=10;
            }
        }
        for(int x=digits-1;x>=0;x--)
            cout<<a[x];
        cout<<endl;
    }
}

