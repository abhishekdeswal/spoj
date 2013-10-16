#include <iostream>
using namespace std;
int main()
{
    int i=10;
    while(i--)
    {
        string a,b;
        int c[100];
        cin>>a>>b;
        int l1=a.length();
        int l2=b.length();
        for(int i=l1-1;i>=0;i--)
           c[i]= (a[i]-'0')+(b[i]-'0'))/2;

    }
}
