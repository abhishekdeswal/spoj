#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        int b[8]={0,0,0,0,0,0,0,0};
        for(int i=0;i<38;i++)
        {
            if(a[i]==84)
            {
                if(a[i+1]==84)
                {
                    if(a[i+2]==84) b[0]++;
                    else           b[1]++;
                }
                else
                {
                    if(a[i+2]==84)  b[2]++;
                    else            b[3]++;
                }
            }
            else
            {
                if(a[i+1]==84)
                {
                    if(a[i+2]==84) b[4]++;
                    else           b[5]++;
                }
                else
                {
                    if(a[i+2]==84)  b[6]++;
                    else            b[7]++;
                }
            }
        }
        cout<<n<<" ";
        for(int i=0;i<8;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}
