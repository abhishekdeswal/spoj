#include <iostream>
#include <cmath>
char a[6]="manku";
using namespace std;
void pr(long long i,long long n,long long sum)
{
    if(n<6) {cout<<a[n-1]<<endl;return;}
    int j=0;
    long long x=pow(5,i);
    while(sum+x<n)
    {
        j++;
        sum+=x;
    }
    cout<<a[j];
    n-=x*(j+1);
    i--;
    sum=pow(5,i); if(i==0) sum=0;
    pr(i,n,sum);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0,i=0,j=0;
        cin>>n;
        while(sum+pow(5,i++)<n)
        {
            i++;
            sum+=pow(5,i);
        }
        pr(i,n,sum);
    }
}
