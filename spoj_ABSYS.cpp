#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3]={0};
        char c;
        cin>>c;
        int i=0;
        while(true)
        {
            cin.get(c);
            if(isdigit(c)) {
                a[i]=a[i]*10+c;
            }
            else if(isalpha(c))
            {
                a[i]==0;
                while(true)
                {
                    cin.get(c);
                    if(c==' ' || c=='\n') break;
                }
            }
            else if(c=='+' || c=='=') i++;
            else if(c=='\n') break;
        }
        if(a[0]==0) cout<<a[2]-a[1]<<" + "<<a[1]<<" = "<<a[2]<<endl;
        else if(a[1]==0) cout<<a[0]<<" + "<<a[2]-a[0]<<" = "<<a[2]<<endl;
        else cout<<a[0]<<" + "<<a[1]<<" = "<<a[0]+a[1]<<endl;
    }
}
