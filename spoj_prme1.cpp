#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n)
{
    float sqrtn=sqrt(n);
    if(n<2) return false;
    if(n<4)return true;
    if(n%2==0) return false;
    for(int d=3;d<=sqrtn;d+=2)
        if(n%d==0) return false;
    return true;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int j=a;
        if(a%2==0)  j+=1;
        for(;j<=b;)
        {
            if(isPrime(j)) cout<<j<<endl;
            if(j>2) j+=2;
            else j++;
        }
        cout<<endl;
    }
}

