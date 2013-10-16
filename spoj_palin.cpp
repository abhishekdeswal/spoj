#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int i=a.size()-1;
        for(int j=i;j>=0;j--)
        {
            if(j==0 && a[j]-'0'==9)
            {
                i++;
                for(int k=1;k<=i+1;k++)
                    a[k]='0';
                a[0]=1+'0';
            }
            else if(a[j]-'0'==9)
            {
                a[j+1]=1+'0';
                a[j]='0';
            }

            else
                {
                    a[j]++;
                    break;
                }
        }
        for(int j=0;j<(i+1)/2;j++)
        {
            if(a[i-j]>a[j])
            {

                int z=i-j-1;
                q:
                if(a[z]-'0'==9)
                {
                    a[z]='0';
                    z=z-1;
                    goto q;
                }
                a[z]++;

                a[i-j]=a[j];

            }
            else a[i-j]=a[j];
        }
        for(int j=0;j<=i;j++)
        {
            cout<<a[j]-'0';
        }
        cout<<endl;
    }
    return 0;
}


