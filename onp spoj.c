#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int l=a.size(),i=0,x=0;
        char b[l+1];
        for(;i<l;i++)
        {
            if(a[i]==')')
            {
                cout<<b[x--];
            }
            else if(a[i]=='(') continue;
            else if(a[i]=='*' || a[i]=='/' || a[i]=='^' || a[i]=='-' || a[i]=='+')
            {
                b[x++]=a[i];
            }
            else
                cout<<a[i];
        }
    }
}
